#include <string>
#include "Book.h"
#include "Book.cpp"
#include <iomanip>

using namespace std;

int main()
{

	int choice = 0;

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
			case 1:
				cout << "Hello, welcome to the Cashier Module" << endl;
	}


}
