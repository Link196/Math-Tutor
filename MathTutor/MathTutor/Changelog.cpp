#include <iostream>

using std::cout;
using std::cin;
using std::endl;

/*-----------------------------------------------------------------
Function documentation
-------------------------------------------------------------------
Name:			changelog

Description:	Displays the changes made over the course of the 
				program's development

Takes in:		Nothing

Returns:		Nothing
-----------------------------------------------------------------*/

void changelog()
{
	cout << "================================================================================================================" << endl;
	cout << "Release Notes:" << endl;
	cout << "================================================================================================================" << endl;
	cout << endl;
	cout << "---------------------------" << endl;
	cout << "Changes in current version:" << endl;
	cout << "---------------------------" << endl;
	cout << " Version 3.8.1" << endl;
	cout << "	- Removed: The second Easter Egg is now gone" << endl;
	cout << "	- Changed: Minor code refactoring to increase efficiency throughout the program" << endl;
	cout << endl;
	cout << "-----------------------------" << endl;
	cout << "Changes in previous versions:" << endl;
	cout << "-----------------------------" << endl;
	cout << " Version 3.8.0" << endl;
	cout << "	- Fixed: Program no longer falls into an infinite loop if the user enters a non-integer at program menu" << endl;
	cout << "	- Changed: Program menu now uses strings instead of integers to validate input" << endl;
	cout << "	- Changed: Converted program menu from switch statement to if/else if sequence to fix string incompatibility" << endl;
	cout << endl;
	cout << " Version 3.7.2" << endl;
	cout << "	- Changed: Changed welcome message to increase clarity" << endl;
	cout << "	- Changed: Minor code refactoring to increase efficiency throughout the program" << endl;
	cout << endl;
	cout << " Version 3.7.1" << endl;
	cout << "	- Changed: Added functionality to pause the program before it exits so the user can see their stats" << endl;
	cout << "	- Changed: Minor code refactoring to increase efficiency throughout the program" << endl;
	cout << endl;
	cout << " Version 3.7.0" << endl;
	cout << "	- Changed: Moved the contents of Functions.h to Main.cpp to increase program efficiency" << endl;
	cout << "	- Changed: Moved ProgramBody() to Main.cpp so that it would stil work" << endl;
	cout << "	- Changed: Minor code refactoring to increase efficiency throughout the program" << endl;
	cout << endl;
	cout << " Version 3.6.1" << endl;
	cout << "	- Changed: Changelog is now 'Release Notes'" << endl;
	cout << "	- Changed: Added descriptions of the types of changes in Release Notes" << endl;
	cout << "	- Changed: New wording throughout the Release Notes" << endl;
	cout << endl;
	cout << " Version 3.6.0" << endl;
	cout << "	- Removed: Eliminated multi-subject functions" << endl;
	cout << "	- Changed: Multi-subject runs now call the individual subject functions in sequence" << endl;
	cout << "	- Changed: Minor code refactoring to increase efficiency throughout the program" << endl;
	cout << endl;
	cout << " Version 3.5.0" << endl;
	cout << "	- Changed: Redesigned stats output to export to a csv file instead of a txt file" << endl;
	cout << endl;
	cout << " Version 3.4.3" << endl;
	cout << "	- Changed: Minor code refactoring to increase efficiency throughout the program" << endl;
	cout << endl;
	cout << " Version 3.4.2" << endl;
	cout << "	- Removed: One of the Easter Eggs is now gone" << endl;
	cout << endl;
	cout << " Version 3.4.1" << endl;
	cout << "	- New: Added Easter Eggs" << endl;
	cout << endl;
	cout << " Version 3.4.0:" << endl;
	cout << "	- New: Added difficulty selection for all subject areas" << endl;
	cout << endl;
	cout << " Version 3.3.4:" << endl;
	cout << "	- Changed: Yes/no answer validation now uses tolower()" << endl;
	cout << endl;
	cout << " Version 3.3.3:" << endl;
	cout << "	- Changed: Moved random number generation from programBody() to main()" << endl;
	cout << "	- Changed: Minor code refactoring to increase efficiency throughout the program" << endl;
	cout << endl;
	cout << " Version 3.3.2:" << endl;
	cout << "	- Changed: Addition, subtraction, and multiplication question format now matches division" << endl;
	cout << "	- Changed: Minor code refactoring to increase efficiency throughout the program" << endl;
	cout << endl;
	cout << " Version 3.3.1:" << endl;
	cout << "	- Changed: Minor changes to formatting of stats output" << endl;
	cout << endl;
	cout << " Version 3.3.0:" << endl;
	cout << "	- New: Added new subject areas:" << endl;
	cout << "			- Combined addition and subtraction" << endl;
	cout << "			- Combined multiplication and division" << endl;
	cout << "			- All subjects in succession" << endl;
	cout << "	- Changed: Minor changes to formatting and wording of welcome message" << endl;
	cout << endl;
	cout << " Version 3.2.4:" << endl;
	cout << "	- Changed: Minor changes to formatting and wording throughout the program" << endl;
	cout << endl;
	cout << " Version 3.2.3:" << endl;
	cout << "	- Changed: Minor changes to formatting and wording throughout the program" << endl;
	cout << endl;
	cout << " Version 3.2.2:" << endl;
	cout << "	- Changed: Answers to subtraction subject area problems are now always positive" << endl;
	cout << "	- Changed: New Release Notes format" << endl;
	cout << endl;
	cout << " Version 3.2.1:" << endl;
	cout << "	- New: Subject areas now output the correct answer if the user chooses not to retry a question" << endl;
	cout << endl;
	cout << " Version 3.2.0:" << endl;
	cout << "	- New: Added file output to output the user's stats to a text file" << endl;
	cout << endl;
	cout << " Version 3.1.0" << endl;
	cout << "	- New: Added a function to display the Release Notes" << endl;
	cout << endl;
	cout << " Version 3.0.1:" << endl;
	cout << "	- Changed: Modified stats so that question retries are tracked separately from regular question attempts" << endl;
	cout << "	- Changed: Minor code refactoring to increase efficiency throughout the program" << endl;
	cout << endl;
	cout << " Version 3.0.0:" << endl;
	cout << "	- New: Added 'User' class and global stats tracking via a pointer to a 'User' object" << endl;
	cout << "	- Removed: Welcome function no longer exists" << endl;
	cout << "	- Changed: Welcome message is now displayed by main()" << endl;
	cout << endl;
	cout << " Version 2.0.0:" << endl;
	cout << "	- Changed: Separated functions into multiple files with a header file and each function in its own .cpp file" << endl;
	cout << "	- Changed: Changed program name from 'Semestor Project' to 'Math Tutor'" << endl;
	cout << endl;
	cout << " Version 1.0.0:" << endl;
	cout << "	- Changed: Minor code refactoring throughout the program in preparation for final project submission for credit" << endl;
	cout << endl;
	cout << " Version 0.5.0:" << endl;
	cout << "	- Changed: Moved welcome message into its own function" << endl;
	cout << "	- Changed: Moved program menu into its own function" << endl;
	cout << "	- Changed: Moved switch statement into its own function" << endl;
	cout << "	- Changed: Minor code refactoring to increase efficiency throughout the program" << endl;
	cout << endl;
	cout << " Version 0.4.0:" << endl;
	cout << "	- New: Added the option to retry a problem in the case of an incorrect answer" << endl;
	cout << "	- New: Each subject area now gives ten random problems" << endl;
	cout << "	- Changed: Moved each subject area into its own function" << endl;
	cout << endl;
	cout << " Version 0.3.0:" << endl;
	cout << "	- New: Added ability to validate answers to problems" << endl;
	cout << "	- New: Added program menu and switch statement" << endl;
	cout << "	- New: Added initial versions of addition, subtraction, multiplication, and division subject areas" << endl;
	cout << endl;
	cout << " Version 0.2.0:" << endl;
	cout << "	- New: Added welcome message" << endl;
	cout << "	- New: Program now presents the user with one simple, multiple choice addition problem" << endl;
	cout << endl;
	cout << " Version 0.1.0:" << endl;
	cout << "	- New: Program outputs its name, description, and subject areas" << endl;
	cout << endl;
	cout << " Version 0.0.0:" << endl;
	cout << "	- New: Created Math Tutor project as 'Semester Project'" << endl;
	cout << endl;
	cout << "================================================================================================================" << endl << endl;
}