/////////////////////////////////////////////////////////
// Program Name: Math Tutor
// Author: Andrew Hutson
// Version: 2.7.0
// Date last modified: 06/02/2017
// Copyright (c) 2017 Andrew Hutson. All rights reserved.
/////////////////////////////////////////////////////////

// For program changelog, see changelog() in Changelog.cpp

#include <iostream>
#include <fstream>
#include <ctime>
#include "Functions.h"
#include "User.h"

using std::cout;
using std::cin;
using std::endl;
using std::ofstream;
using std::ios;

int main()
{
	srand(time(NULL)); // random number generator for math problems

	cout << "Math Tutor" << endl; // the program's name
	cout << "Version 2.7.0" << endl; // the program's version number
	cout << "Date last modified: 06/02/2017" << endl; // the date the program was last modified
	cout << "Copyright (c) 2017 Andrew Hutson. All rights reserved." << endl;
	cout << endl;
	cout << "Welcome! This program will help you practice the following math concepts:" << endl; // the program's description
	cout << "Addition, Subtraction, Multiplication, and Division." << endl << endl; // subject areas that the program supports

	string name; // variable to store the user's name
	cout << "What is your name? "; // ask the user for their name
	getline(cin, name); // record the user's response
	User* p1 = new User(name); // creates a new user object and assigns it to a pointer
	cout << endl << "Welcome, " << p1->getName() << ". Thank you for joining us today." << endl << endl; // welcome the user by name
	if (p1->getName() == "John Cena") // John Cena easter egg
		cout << "*Cue epic theme music*" << endl;
	cout << endl;

	bool done = false; // allows the user to use multiple subject areas without closing the program
	while (done == false)
	{
		done = programBody(p1); // the main body of the program
	}

	// output stats to the screen and a csv file
	ofstream stats; // open file output stream
	stats.open("Stats.csv", ios::out | ios::ate | ios::app | ios::binary); // open csv file for writing

	if (stats.fail())
	{
		cout << "Couldn't create/open file" << endl;
	}

	// display stats
	cout << "============================" << endl;
	cout << "     Session Statistics     " << endl;
	cout << "============================" << endl;
	cout << "User: " << p1->getName() << endl; // output the user's name
	cout << "----------------------------" << endl;
	cout << "Questions attempted:      " << p1->totalAttempted << endl; // output the total number of questions attempted
	cout << "Correct answers:          " << p1->correctAnswers << endl; // output the number of correct answers
	cout << "Incorrect answers:        " << p1->incorrectAnswers << endl; // output the number of incorrect answers
	cout << "----------------------------" << endl;
	cout << "Questions retried:        " << p1->totalRetried << endl; // output the total number of questions retried
	cout << "Correct retries:          " << p1->correctRetries << endl; // output the number of correct retries
	cout << "Incorrect retries:        " << p1->incorrectRetries << endl; // output the number of incorrect retries
	cout << "============================" << endl << endl;

	// write stats to a new line of the csv file
	stats << p1->getName() << "," << p1->totalAttempted << "," << p1->correctAnswers << "," << p1->incorrectAnswers << "," << p1->totalRetried << "," << p1->correctRetries << "," << p1->incorrectRetries << endl;

	cout << "Stats have also been saved to the last line of Stats.csv in the program's source code folder." << endl;
	cout << endl;

	stats.close(); // close the file

	delete p1; // deletes the pointer

	return 0;
}