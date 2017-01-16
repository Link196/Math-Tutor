#include <iostream>
#include "Functions.h"

using namespace std;

void multiplicationDivision(User* p1) // combined multiplication and division subject area
{
	cout << "You will be presented with 10 multiplication problems and 10 division problems and then retured to the main menu." << endl;
	cout << "If, at any time, you wish to skip all (or the rest) of a subject area, enter '-1' as your response." << endl;
	cout << endl;

	cout << "==================================" << endl;
	cout << "Multiplication problems: " << endl;
	cout << "==================================" << endl;
	cout << endl;

	int difficulty1;
	do
	{
		cout << "What difficulty would you like? " << endl; // ask the user how hard they want the problems to be
		cout << "1) Easy " << endl;
		cout << "2) Normal " << endl;
		cout << "3) Hard " << endl;
		cout << "Your selection: ";
		cin >> difficulty1;
	} while (difficulty1 != 1 && difficulty1 != 2 && difficulty1 != 3);

	for (int count1 = 1; count1 <= 10; count1++) // output ten multiplication problems in succession
	{
		int x = 5;
		int y = 5;

		if (difficulty1 == 1)
		{
			x = rand() % 10;
			y = rand() % 10;
		}

		if (difficulty1 == 2)
		{
			x = rand() % 100;
			y = rand() % 100;
		}

		if (difficulty1 == 3)
		{
			x = rand() % 1000;
			y = rand() % 1000;
		}

		cout << "==================================" << endl;
		cout << "Problem " << count1 << ":" << endl; // display the problem number
		cout << "==================================" << endl;
		cout << "What is " << x << " times " << y << "?" << endl;
		int answer;
		cout << "Your answer: ";
		cin >> answer;
		cout << endl;

		if (answer != -1) // check the user's response. If they entered -1, skip the subject area
		{
			if (answer == x * y) // if the user's answer was correct, congradulate them and increment the correct variables
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
				cout << "------------------------------------------------------" << endl;
				cout << "Would you like to try that problem again? (y or n) "; // give the user the option to try again
				char answer2;
				cin >> answer2;
				cout << "------------------------------------------------------" << endl;

				if (tolower(answer2) == 'y') // give the user the same question a second time
				{
					cout << "Note: While retrying a problem, you cannot enter -1 to skip the subject area." << endl;
					cout << "When you are presented with a new problem, you may enter -1 to skip the subject area." << endl;
					cout << "Also, retrying a problem counts towards your statistics for this session." << endl;
					cout << endl;
					cout << "What is " << x << " times " << y << "?" << endl;
					cout << "Your answer: ";
					cin >> answer;
					cout << endl;

					if (answer == x * y) // if the user's answer was correct, congradulate them and increment the correct variables
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
						cout << "The correct answer is " << (x * y) << endl;
						cout << "----------------------------------" << endl;
					}
				}
				else // if the user chooses not to retry a problem, tell them the correct answer
				{
					cout << "----------------------------------" << endl;
					cout << "The correct answer is " << (x * y) << endl;
					cout << "----------------------------------" << endl;
				}
			}
		}

		else
		{
			count1 = 11; // exit the for loop to skip the subject area
		}
	}

	cout << "==================================" << endl;
	cout << "Division problems: " << endl;
	cout << "==================================" << endl;
	cout << endl;

	int difficulty2;
	do
	{
		cout << "What difficulty would you like? " << endl; // ask the user how hard they want the problems to be
		cout << "1) Easy " << endl;
		cout << "2) Normal " << endl;
		cout << "Your selection: ";
		cin >> difficulty2;
	} while (difficulty2 != 1 && difficulty2 != 2);

	for (int count2 = 1; count2 <= 10; count2++) // output ten division problems in succession
	{
		int x = 5;

		if (difficulty2 == 1)
		{
			x = rand() % 100;
		}

		if (difficulty2 == 2)
		{
			x = rand() % 1000;
		}
		int y;

		do // protect against dividing by 0 or 1
		{
			y = rand() % 10;
		} while ((y == 0) || (y == 1));

		cout << "==================================" << endl;
		cout << "Problem " << count2 << ":" << endl; // display the problem number
		cout << "==================================" << endl;
		cout << "What is " << x << " divided by " << y << "?" << endl;
		double answer;
		cout << "Your answer: ";
		cin >> answer;
		cout << endl;

		if (answer != -1) // check the user's response. If they entered -1, skip the subject area
		{
			if ((answer <= (((static_cast<double> (x)) / y) + .1)) && (answer >= (((static_cast<double> (x)) / y) - .1))) // if the user's answer was correct, congradulate them and increment the correct variables
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
				cout << "------------------------------------------------------" << endl;
				cout << "Would you like to try that problem again? (y or n) "; // give the user the option to try again
				char answer2;
				cin >> answer2;
				cout << "------------------------------------------------------" << endl;

				if (tolower(answer2) == 'y') // give the user the same question a second time
				{
					cout << "Note: While retrying a problem, you cannot enter -1 to skip the subject area." << endl;
					cout << "When you are presented with a new problem, you may enter -1 to skip the subject area." << endl;
					cout << "Also, retrying a problem counts towards your statistics for this session." << endl;
					cout << endl;
					cout << "What is " << x << " divided by " << y << "?" << endl;
					cout << "Your answer: ";
					cin >> answer;
					cout << endl;

					if ((answer <= (((static_cast<double> (x)) / y) + .1)) && (answer >= (((static_cast<double> (x)) / y) - .1))) // if the user's answer was correct, congradulate them and increment the correct variables
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
						cout << "The correct answer is " << ((static_cast<double> (x)) / y) << endl;
						cout << "----------------------------------" << endl;
					}
				}
				else // if the user chooses not to retry a problem, tell them the correct answer
				{
					cout << "----------------------------------" << endl;
					cout << "The correct answer is " << ((static_cast<double> (x)) / y) << endl;
					cout << "----------------------------------" << endl;
				}
			}
		}

		else
		{
			count2 = 11; // exit the for loop to skip the subject area
		}
	}
}