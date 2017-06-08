// Joel Bares Ernie Hung Christian Magpantay

#ifndef BOOK_H

#define BOOK_H

#include <iostream>
#include <string>

using namespace std;

class Book
{
protected:
	int ISBN;
	string title;
	string author;
	string publisher;
	string dateAdded;
	int quantity;
	double wholesale;
	double retailPrice;
	double subtotal;
	double tax;
	double total;
	const double TAX_RATE = 0.08;
public:
	// Accessors / mutators
	// default constructor
	Book();

	// constructor
	Book(string, string, string, string, string, int, double, double);

	// deconstructor
	~Book()
	{
		cout << title << " deleted" << endl;
	}

	void setISBN(int isbn);

	void setTitle(string t);

	void setAuthor(string a);

	void setPublisher(string p);

	void setdateAdded(string d);

	void setQuantity(int q);

	void setWholesale(double w);

	void setRetailPRice(double r);

	void setTax(double);

	string getISBN() const;

	string getTitle() const;

	string getAuthor() const;

	string getPublisher() const;

	string getDateAdded() const;

	int getQuantity() const;

	double getWholesale() const;

	double getRetailPrice() const;

	double getTax() const;

	double getSubtotal() const;

	double getTotal() const;
};

#endif
