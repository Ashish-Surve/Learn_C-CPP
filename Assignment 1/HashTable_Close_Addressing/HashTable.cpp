#include"HashTable.h"


HashTable::HashTable()
{
	for (int i = 0; i < SIZE; i++)
	{
		HashTab[i].data = -1;
		HashTab[i].next = -1;
	}
	current_size = 0;
}

void HashTable::AddElement(int val)
{

	//check if full
	if (current_size >= SIZE)
	{
		cout << "\t\t\t\t\tTable Full" << endl;
		return;
	}
	int hash = HashFunction(val);

	if (HashTab[hash].data == -1 && HashTab[hash].next == -1)
	{
		HashTab[hash].data = val;
		current_size++;
		return;
	}
	else
	{
		int * pnext = nullptr;
		int tdata = hash;
		while (HashTab[tdata].data != -1)
		{
			if (hash == HashFunction(HashTab[tdata].data))
			{
				pnext = &HashTab[tdata].next; 
			}
			tdata = (tdata + 1) % SIZE;
		}


		HashTab[tdata].data = val;
		if(pnext!=nullptr)
			*pnext = tdata;
		current_size++;
		return;
	}
}

void HashTable::DeleteElement(int val)
{
	if (current_size <= 0)
	{
		cout << "\t\t\t\t\tTable Empty" << endl;
		return;
	}

	int hash = HashFunction(val);
	if (HashTab[hash].data == val && HashTab[hash].next == -1)
	{
		HashTab[hash].data = -1;
		current_size--;
		return;
	}
	else
	{

		//pnode is a pointer to prev node havig same hash.
		Node * pnode = nullptr;
		int tdata = hash; //tdata has index of node to be deleted.
		int size = 0;

		//find the index where val is present
		while (HashTab[tdata].data != val && size<=SIZE)
		{
			if (hash == HashFunction(HashTab[tdata].data))
			{
				pnode = &HashTab[tdata];
			}
			tdata = (tdata + 1) % SIZE;
			size++;
		}
		if (size == SIZE)
		{
			cout <<"\t\t\t\t\t"<<val <<" not present in HashTable" << endl;
		}
		//find the last node of the chain.
		int last_node_chain = tdata;
		int preLastNode = 0;
		while (HashTab[last_node_chain].next != -1)
		{
			preLastNode = last_node_chain;
			last_node_chain = HashTab[last_node_chain].next;
		}

		//implies the node to be deleted was last node.
		if (last_node_chain == tdata)
		{
			pnode->next = -1;
			HashTab[tdata].next = -1;
			HashTab[tdata].data = -1;
		}
		else//implies node to be deleted was not last node.
		{
			HashTab[tdata].data = HashTab[last_node_chain].data;
			HashTab[preLastNode].next = -1;
			HashTab[last_node_chain].data = -1;
			HashTab[last_node_chain].next = -1;
		}
		current_size--;
		return;
	}
}

void HashTable::SearchElement(int val)
{
	int hash = HashFunction(val);
	int tdata = hash;

	//iterate until we find hash the chain containing the element
	while (HashFunction(HashTab[tdata].data) != hash)
	{
		tdata = (tdata + 1) % SIZE;
	}
	do {
		if (HashTab[tdata].data == val)
		{
			cout << "Element Found at index " <<tdata<< endl;
			return;
		}
		tdata = HashTab[tdata].next;
	} while (tdata != -1);
	
		cout << "Element not Found " << endl;
	return;
}

int HashTable::HashFunction(int val)
{
	int index = (val) % SIZE;
	return index;
}

void HashTable::Display()
{
	for (int i = 0; i < SIZE; i++)
	{
		cout << HashTab[i].data << "\t" << HashTab[i].next << endl;
	}
}