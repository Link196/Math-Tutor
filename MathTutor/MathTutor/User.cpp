#include "User.h"

User::User(const string username)	// creates user object and initializes all counting variables to '0'
{
	name = username;				// name = whatever is passed to the function
	correctAnswers = 0;				// correct answers = 0
	incorrectAnswers = 0;			// incorrect answers = 0
	totalAttempted = 0;				// total questions attempted = 0
	correctRetries = 0;				// total correct retry answers = 0
	incorrectRetries = 0;			// total incorrect retry answers = 0
	totalRetried = 0;				// total questions retried = 0
}

string User::getName()
{
	return name;
}

void User::setName(string newName)
{
	name = newName;
}