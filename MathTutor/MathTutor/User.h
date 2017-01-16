#ifndef USER_H_
#define USER_H_

#include <string>

using std::string;

class User
{
private:
	string name; // the user's name

public:
	int correctAnswers; // total correct answers
	int incorrectAnswers; // total incorrect answers
	int totalAttempted; // total questions attempted
	int correctRetries; // total correct retries
	int incorrectRetries; // total incorrect retries
	int totalRetried; // total questions retried
	User(string); // constructor that sets the user's name
	string getName(); // returns the user's name
	void setName(string); // sets the user's name
};

#endif