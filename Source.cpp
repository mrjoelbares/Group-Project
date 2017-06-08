// Joel Bares Ernie Hung Christian Magpantay

#define CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <string>
#include "Book.h"
#include <iomanip>

using namespace std;

void CashierModule();
void InventoryModule();
void ReportModule();


int main()
{

	string userSInput = "";

	// books[0] = { Book("12372713", "Gone With The Wind", "Wow Dude", "Book Guys", "06/08/2017", 5, 15.95, 20.25) };

	

	int choice = 0;
	bool choice2;

	cout << "Hello, welcome to the book store" << endl;
	cout << "Please select which module you would like to access" << endl;

	cout << "1. Cashier" << endl;
	cout << "2. Inventory" << endl;
	cout << "3. Report" << endl;
	cout << "4. Exit" << endl;
	cin >> choice;

	do
	{
		switch (choice)
		{
		case 1:
			CashierModule();





			break;
		case 2:
			InventoryModule();







			break;

		case 3:
			ReportModule();




			break;

		case 4:
			cout << "Goodbye." << endl;
			choice2 = false;
			break;
		default: 
			cout << "Error! Try again" << endl;
			choice2 = true;
			break;
		}

				
	} while (choice2 == true);


	system("pause");
	
}


void CashierModule()
{
	cout << "Hello, welcome to the Cashier Module" << endl;





}


/*
Pseudocode




*/
void InventoryModule()
{
	int size = 0;
	int choice;
	string userSInput;
	int userInput = 0;
	double userDInput = 0.0;

	cout << "Hello, welcome to the Inventory Module" << endl << endl;

	cout << "Please select an option" << endl;
	cout << "1. Look Up a Book" << endl;
	cout << "2. Add a Book" << endl;
	cout << "3. Edit a Book's Record" << endl;
	cout << "4. Delete a Book" << endl;
	cout << "5. Return to Main Menu" << endl;
	cin >> choice;

	switch (choice)
	{
	case 1:
		cout << "Please enter " << endl;
		break;
	case 2:
		cin.ignore(100);
		cout << "Please enter book values" << endl;

		cout << "ISBN: ";
		getline(cin, userSInput);
		// books.setISBN(userSInput);
		cout << endl;
		cout << "Title: ";
		getline(cin, userSInput);
		// books.setTitle(userSInput);
		cout << endl;

		cout << "Author: ";
		getline(cin, userSInput);
		// books.setAuthor(userSInput);
		cout << endl;
		cout << "Publisher: ";
		getline(cin, userSInput);
		// books.Publisher(userSInput);
		cout << endl;
		cout << "Date Added: ";
		getline(cin, userSInput);
		// books.setDateAdded(userSInput);
		cout << endl;

		cout << "Quantity-On-Hand: ";
		cin >> userInput;
		// books.setQuantity(userInput);
		cout << endl;

		cout << "Wholesale Price: ";
		cin >> userDInput;
		// books.setWholesale(userInput);
		cout << endl;

		cout << "Retail Price: ";
		cin >> userDInput;
		// books.setRetailPrice(userInput);
		cout << endl;
		break;
	case 3:
		cout << "Please enter the ISBN of the book you wish to edit" << endl;
		// cin >> ISBN;
		break;
	case 4:
		cout << "Please enter the ISBN of the book you wish to delete or enter " << endl;
		// cin >> ISBN;
		break;
	case 5:

		break;
	default:
		cout << "Error. Try again." << endl;
		break;
	}

}

void ReportModule()
{
	cout << "Hello, welcome to the Report Module" << endl;



}
