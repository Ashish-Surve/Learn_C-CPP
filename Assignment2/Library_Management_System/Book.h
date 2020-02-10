#pragma once
#include<iostream>
#include<string>
using namespace std;
class Book
{
private:
	int book_id;
	string book_name;
	string book_author;

public:

	Book() :book_id(0), book_name(""), book_author("") {}
	Book(int bid, string name, string author) :book_id(bid), book_name(name), book_author(author){}
	string getBookName();	// getter methods
	string getBookAuthor();
	int getBookId();
	void setBookName(string book_name);	// setter methods
	void setBookAuthor(string book_author);

	void displayBookDetails()const;
};