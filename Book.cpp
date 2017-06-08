// Joel Bares, Ernie Hung, Christian Magpantay

#define CRT_SECURE_NO_WARINGS

#include <iostream>
#include <string>
#include "Book.h"



using namespace std;


Book::Book()
{
	ISBN = 0;
	title = "";
	author = "";
	publisher = "";
	dateAdded = "";
	quantity = 0;
	wholesale = 0.0;
	retailPrice = 0.0;
	subtotal = 0.0;
	tax = 0.0;
	total = 0.0;
}

void Book::setISBN(int isbn)
{
	ISBN = isbn;
}
void Book::setTitle(string t)
{
	title = t;
}
void Book::setAuthor(string a)
{
	author = a;
}
void Book::setPublisher(string p)
{
	publisher = p;
}
void Book::setdateAdded(string d)
{
	dateAdded = d;
}
void Book::setQuantity(int q)
{
	quantity = q;
}
void Book::setWholesale(double w)
{
	wholesale = w;
}
void Book::setRetailPRice(double r)
{
	retailPrice = r;
}
// setTax(double);

string Book::getISBN() const
{
	return ISBN;
}
string Book::getTitle() const
{
	return title;
}
string Book::getAuthor() const
{
	return author;
}
string Book::getPublisher() const
{
	return publisher;
}
string Book::getDateAdded() const
{
	return dateAdded;
}
int Book::getQuantity() const
{
	return quantity;
}
double Book::getWholesale() const
{
	return wholesale;
}
double Book::getRetailPrice() const
{
	return retailPrice;
}
double Book::getTax() const
{
	return subtotal * TAX_RATE;
}
double Book::getTotal() const
{
	return subtotal + tax;
};
