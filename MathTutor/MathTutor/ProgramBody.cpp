#include <iostream>
#include "Functions.h"

using std::cout;
using std::cin;
using std::endl;

bool programBody(User* p1) // the main body of the program
{
	bool done = false; 
	int choice = menu(); // prompt the user for their subject choice by running the menu function

	switch (choice) // subject selection menu
	{
		case 1: // starts the addition subject area
		{
			addition(p1);
		}

		break;

		case 2: // starts the subtraction subject area
		{
			subtraction(p1);
		}

		break;

		case 3: // starts the multiplication subject area
		{
			multiplication(p1);
		}

		break;

		case 4: // starts the division subject area
		{
			division(p1);
		}

		break;

		case 5: // starts the addition subject area and then starts the subtraction subject area
		{
			addition(p1);
			subtraction(p1);
		}

		break; 

		case 6: // starts the multiplication subject area and then starts the division subject area
		{
			multiplication(p1);
			division(p1);
		}

		break;

		case 7: // starts all four subject areas sequentially
		{
			addition(p1);
			subtraction(p1);
			multiplication(p1);
			division(p1);
		}

		break;

		case 8: // displays the changelog
		{
			changelog();
		}

		break;

		case 9: // exits the program
		{
			cout << "Math Tutor will now exit." << endl << "Thank you for using Math Tutor." << endl << "Have a nice day." << endl;
			cout << endl;
			done = true;

			break;
		}

		default: // executes if the user entered an invalid choice
		{
			cout << "-----------------------------" << endl;
			cout << "Error. " << choice << " is invalid" << endl;
			cout << "Please enter a valid choice" << endl; // prompts the user for a valid choice
			cout << "-----------------------------" << endl;
			cout << endl;
		}
	}

	return done;
}