/////////////////////////////////////////////////////////
// Program Name: Math Tutor
// Author: Andrew Hutson
// Version: 3.8.1
// Date last modified: 01/30/2023
// Copyright (c) 2023 Andrew Hutson. All rights reserved.
/////////////////////////////////////////////////////////

// For program changelog, see changelog() in Changelog.cpp

#include <iostream>
#include <fstream>
#include <ctime>
#include "User.h"

using std::cout;
using std::cin;
using std::endl;
using std::ofstream;
using std::ios;

string menu();					// program menu
void changelog();				// program changelog
void addition(User*);			// addition subject area
void subtraction(User*);		// subtraction subject area
void multiplication(User*);		// multiplication subject area
void division(User*);			// division subject area

/*-----------------------------------------------------------------
Function documentation
-------------------------------------------------------------------
Name:			programBody

Description:	Launches the appropriate function based on the 
				user's selection from the menu function

Takes in:		Pointer to a global User object for stats tracking

Returns:		Boolean variable to tell main() whether the user 
				has chosen to exit the program:
					- true = program will exit
					- false = program will run for another cycle
-----------------------------------------------------------------*/

bool programBody(User* p1)		// the main body of the program
{
	bool done = false;
	string choice = menu();		// prompt the user for their subject choice by running the menu function

	// subject selection menu with if/else if sequence replacing switch statment in order to use strings as input
	if (choice == "1")			// starts the addition subject area
		addition(p1);
	else if (choice == "2")		// starts the subtraction subject area
		subtraction(p1);
	else if (choice == "3")		// starts the multiplication subject area
		multiplication(p1);
	else if (choice == "4")		// starts the division subject area
		division(p1);
	else if (choice == "5")		// starts the addition subject area and then starts the subtraction subject area
	{
		addition(p1);
		subtraction(p1);
	}
	else if (choice == "6")		// starts the multiplication subject area and then starts the division subject area
	{
		multiplication(p1);
		division(p1);
	}
	else if (choice == "7")		// starts all four subject areas sequentially
	{
		addition(p1);
		subtraction(p1);
		multiplication(p1);
		division(p1);
	}
	else if (choice == "8")		// displays the changelog
		changelog();
	else if (choice == "9")		// exits the program
	{
		cout << "Math Tutor will now exit." << endl << "Thank you for using Math Tutor." << endl << "Have a nice day." << endl;
		cout << endl;
		done = true;
	}
	
	// executes if the user entered an invalid choice
	else
	{
		cout << "-----------------------------" << endl;
		cout << "Error. '" << choice << "' is invalid" << endl;
		cout << "Please enter a valid choice" << endl;
		cout << "-----------------------------" << endl;
		cout << endl;
	}

	return done;
}

/*-----------------------------------------------------------------
Function documentation
-------------------------------------------------------------------
Name:			main

Description:	The program's main function does the following:
					- Outputs the welcome message, 
					- Takes in the user's name, 
					- Initializes the User class, 
					- Runs the main program loop (programBody())
					- Outputs stats to the screen and a file (.csv)
					- Cleans up
					- Exits the program

Takes in:		Nothing

Returns:		Nothing
-----------------------------------------------------------------*/

int main()
{
	srand(time(NULL)); // random number generator for math problems

	// Welcome the user and output basic information about the program
	cout << "Math Tutor" << endl;
	cout << "Version 3.8.1" << endl;
	cout << "Date last modified: 01/30/2023" << endl;
	cout << "Copyright (c) 2023 Andrew Hutson. All rights reserved." << endl;
	cout << endl;
	cout << "Welcome! This program will help you practice the following math concepts:" << endl;			// the program's description
	cout << "Addition, Subtraction, Multiplication, and Division." << endl << endl;							// subject areas that the program supports

	string name;																							// variable to store the user's name
	cout << "Please enter your name: ";																		// ask the user for their name
	getline(cin, name);																						// record the user's response
	User* p1 = new User(name);																				// creates a new user object and assigns it to a pointer
	cout << endl << "Welcome, " << p1->getName() << ". Thank you for joining us today." << endl << endl;	// welcome the user by name
	cout << endl;

	bool done = false;																						// allows the user to use multiple subject areas without closing the program
	while (done == false)
	{
		done = programBody(p1);																				// execute the main body of the program
	}

	// output stats to the screen and a csv file
	ofstream stats;																							// open file output stream
	stats.open("Stats.csv", ios::out | ios::ate | ios::app | ios::binary);									// open csv file for writing

	if (stats.fail())
	{
		cout << "Couldn't create/open file" << endl;
	}

	// display stats
	cout << "============================" << endl;
	cout << "     Session Statistics     " << endl;
	cout << "============================" << endl;
	cout << "User: " << p1->getName() << endl;																// output the user's name
	cout << "----------------------------" << endl;
	cout << "Questions attempted:      " << p1->totalAttempted << endl;										// output the total number of questions attempted
	cout << "Correct answers:          " << p1->correctAnswers << endl;										// output the number of correct answers
	cout << "Incorrect answers:        " << p1->incorrectAnswers << endl;									// output the number of incorrect answers
	cout << "----------------------------" << endl;
	cout << "Questions retried:        " << p1->totalRetried << endl;										// output the total number of questions retried
	cout << "Correct retries:          " << p1->correctRetries << endl;										// output the number of correct retries
	cout << "Incorrect retries:        " << p1->incorrectRetries << endl;									// output the number of incorrect retries
	cout << "============================" << endl << endl;

	// write stats to a new line of the csv file
	stats << p1->getName() << "," << p1->totalAttempted << "," << p1->correctAnswers << "," << p1->incorrectAnswers << "," << p1->totalRetried << "," << p1->correctRetries << "," << p1->incorrectRetries << endl;

	cout << "Stats have also been saved to the last line of Stats.csv in the program's source code folder." << endl;
	cout << endl;

	stats.close();		// close the file

	system("PAUSE");	// pause the program before exiting

	delete p1;			// deletes the pointer

	return 0;
}