#include <iostream>
#include "User.h"

using std::cout;
using std::cin;
using std::endl;

/*-----------------------------------------------------------------
Function documentation
-------------------------------------------------------------------
Name:			addition

Description:	Addition subject area prompts the user for a 
				difficulty level and then outputs ten (10) 
				addition problems of the selected difficulty

Takes in:		Pointer to a global User object for stats tracking

Returns:		Nothing
-----------------------------------------------------------------*/

void addition(User* p1) 
{
	cout << "You will now be presented with 10 addition problems." << endl;
	cout << "If, at any time, you wish to skip the rest of the section, enter '-1' as your response." << endl;
	cout << endl;

	cout << "==================================" << endl;
	cout << "Addition problems: " << endl;
	cout << "==================================" << endl;
	cout << endl;

	int difficulty;
	do
	{
		cout << "What difficulty would you like? " << endl; // ask the user how hard they want the problems to be
		cout << "1) Novice " << endl;
		cout << "2) Easy " << endl;
		cout << "3) Normal " << endl;
		cout << "Your selection: ";
		cin >> difficulty;
	} while (difficulty != 1 && difficulty != 2 && difficulty != 3);

	for (int count = 1; count <= 10; count++) // output ten addition problems in succession
	{
		int x = 5;
		int y = 5;

		if(difficulty == 1)
		{
			x = rand() % 10;
			y = rand() % 10;
		}

		if(difficulty == 2)
		{
			x = rand() % 100;
			y = rand() % 100;
		}

		if(difficulty == 3)
		{
			x = rand() % 1000;
			y = rand() % 1000;
		}

		cout << "==================================" << endl;
		cout << "Problem " << count << ":" << endl; // display the problem number
		cout << "==================================" << endl;
		cout << "What is " << x << " plus " << y << "?" << endl;
		int answer;
		cout << "Your answer: ";
		cin >> answer;
		cout << endl;

		if (answer != -1)  // check the user's response. If they entered -1, return to the main menu
		{
			if (answer == x + y) // if the user's answer was correct, congratulate them and increment the correct variables
			{
				p1->correctAnswers++;
				p1->totalAttempted++;
				cout << "----------------------------------" << endl;
				cout << "Correct. Nice job!" << endl;
				cout << "----------------------------------" << endl;
				cout << endl;
			}

			else // if the user's answer was incorrect, tell them and increment the correct variables
			{
				p1->incorrectAnswers++;
				p1->totalAttempted++;
				cout << "----------------------------------" << endl;
				cout << "Sorry, that's not correct." << endl;
				cout << "-----------------------------------------------------" << endl;
				cout << "Would you like to try that problem again? (y or n) ";
				char answer2;
				cin >> answer2;
				cout << "-----------------------------------------------------" << endl;

				if (tolower(answer2) == 'y') // give the user the same question a second time
				{
					cout << "Note: While retrying a problem, you cannot enter -1 to return to the main menu." << endl;
					cout << "When you are presented with a new problem, you may enter -1 to return to the main menu." << endl;
					cout << "Also, retrying a problem counts towards your statistics for this session." << endl;
					cout << endl;
					cout << "What is " << x << " plus " << y << "?" << endl;
					cout << "Your answer: ";
					cin >> answer;
					cout << endl;

					if (answer == x + y) // if the user's answer was correct, congratulate them and increment the correct variables
					{
						p1->correctRetries++;
						p1->totalRetried++;
						cout << "----------------------------------" << endl;
						cout << "Correct. Nice job!" << endl;
						cout << "----------------------------------" << endl;
						cout << endl;
					}

					else // if the user's answer was incorrect, tell them and increment the correct variables
					{
						p1->incorrectRetries++;
						p1->totalRetried++;
						cout << "----------------------------------" << endl;
						cout << "Sorry, that's not correct." << endl;
						cout << "----------------------------------" << endl;
						cout << "The correct answer is " << (x + y) << endl;
						cout << "----------------------------------" << endl;
					}
				}
				else // if the user chooses not to retry a problem, tell them the correct answer
				{
					cout << "----------------------------------" << endl;
					cout << "The correct answer is " << (x + y) << endl;
					cout << "----------------------------------" << endl;
				}

			}
		}

		else
		{
			count = 11; // exit the loop to return to the main menu or advance to the next subject area
		}
	}
}