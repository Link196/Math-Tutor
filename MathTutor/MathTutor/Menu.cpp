#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int menu() //displays the program's menu and takes the user's subject selection
{
	int choice;
	// If the user enters an invalid integer, the switch will execute the default case, and the program will output the menu again and ask for a new choice.
	// If the user enters a character instead of an integer, the program falls into an infinite loop
	cout << "===============================" << endl;
	cout << "           Main Menu           " << endl;
	cout << "===============================" << endl;
	cout << "Subject Areas:" << endl;
	cout << "-------------------------------" << endl;
	cout << "1) Addition" << endl;
	cout << "2) Subtraction" << endl;
	cout << "3) Multiplication" << endl;
	cout << "4) Division" << endl;
	cout << "5) Addition and Subtraction" << endl;
	cout << "6) Multiplication and Division" << endl;
	cout << "7) All subjects in succession" << endl;
	cout << "-------------------------------" << endl;
	cout << "Program Options:" << endl;
	cout << "-------------------------------" << endl;
	cout << "8) View Release Notes" << endl;
	cout << "9) Exit the program" << endl;
	cout << "-------------------------------" << endl;
	cout << "Enter a number between 1 and 9: " << endl;
	cout << "-------------------------------" << endl;
	cout << "Your selection: ";
	cin >> choice;
	cout << "-------------------------------" << endl;
	cout << endl;

	return choice;
}