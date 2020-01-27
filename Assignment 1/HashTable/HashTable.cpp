#include"HashTable.h"

void HashTable::AddElement(int val)
{
	//get key/index for new node
	int index = HashFunction(val);

	//create a new node
	Node* newnode = new Node;
	newnode->data = val;

	//add newnode at beginning.
	newnode->next = HashTab[index];
	HashTab[index] = newnode;

	cout << "Element Added at "<< index<< endl;

}

void HashTable::DeleteElement(int val)
{
	//get key/index for new node
	int index = HashFunction(val);
	
	//search the node
	Node* temp = HashTab[index];

	//Safety Check 1
	if (nullptr == temp)
	{
		cout << "Element Not Found" << endl;
		return;
	}
	
	if (temp->data == val)
	{
		Node* toBeDel = temp;
		HashTab[index] = temp->next;

		//deallocate memory.
		delete toBeDel;

		cout << "Element Deleted" << endl;
		return;
	}

	//move temp until temp's next has req value to be deleted.
	while (temp->next && temp->next->data!=val )
		temp = temp->next;

	//Safety Check 2
	if (nullptr == temp->next)
	{
		cout << "Element Not Found" << endl;
		return;
	}
	Node* toBeDel = temp->next;
	temp->next = temp->next->next;

	//deallocate memory.
	delete toBeDel;

	cout << "Element Deleted" << endl;

}

void HashTable::SearchElement(int val)
{
		int index = HashFunction(val);

		Node*temp = HashTab[index];

		//move temp until temp has req value.
		while (temp && temp->data != val)
			temp = temp->next;

		//Safety Check 1
		if (nullptr == temp)
			cout << "\t\t\t\tElement Not Found" << endl;
		else
			cout << "\t\t\t\tElement Found" << endl;
}

int HashTable::HashFunction(int val)
{
	int index = (val * 13) % SIZE;
	return index;
}