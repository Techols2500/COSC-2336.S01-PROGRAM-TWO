//************************************************************************** 
//
// Programming Excerise 2   
// CLASS: COSC 2336.S01
// AUTHOR: TYLER ECHOLS 
// DAtE: Sep 2017  
//
//************************************************************************** 

#include "UBQueue.h"
#include <iostream>

using namespace std;

void main()
{
	
	cout << "Testing the constructor and methods: " << endl;
	UBQueue q1;

	string kbInput;
	string stringInput;
	string command;
	int inputLength;
	q1[0] = "a";
	q1[5] = "b";
	q1[7] = "c";
	q1[10] = "d";

	
	q1.queue("e");

	//testing dequeue
	q1.deQueue();

	//checking the data in the queue  
	cout << q1.GetFirst() << endl;
	for (int k = 1; k < q1.Size(); k++)
	{
		cout << q1.GetNext() << endl;
	}

	cout << "\nCommands: \nQ string - queues the string to the list\nD - Causes the head string to be dequeued and printed\nX - Terminates the program\n\n" << endl;

	//user input
	while (command != "X")
	{
		cout << "Please enter a command: ";
		getline(cin, kbInput);
		inputLength = kbInput.length();

		if (inputLength != 0) //checks if there is any user input
		{
			command = kbInput.at(0);
		}
		else //if there is no user input, prevents at from throwing an exception. sets to an impossible value. 
		{
			command = " ";
		}

		if (command == "Q")
		{
			if ((kbInput.length() > 2) && (kbInput.at(1) == ' ')) //swapped the two checks to prevent at from throwing an exception if Q is entered alone
			{
				stringInput = kbInput.substr(2); //gets a substring from position 2 to the end 
				q1.queue(stringInput);
				cout << stringInput << " has been queued to the list" << endl;
			}
			else
			{
				cout << "You have entered an invalid command. Please try again" << endl;
			}
		}
		else
		{
			if (command == "D")
			{
				cout << "Element removed: " << q1.deQueue() << endl;
			}
			else
			{
				if (command == "X")
				{
					cout << "Terminating program..." << endl;
				}
				else
				{
					cout << "You have entered an invalid command. Please try again" << endl;
				}
			}
		}
	}

	cout << "\nYour final queue contained ";
	if (q1.Size() > 0) //if the queue isn't empty
	{
		cout << "\n" << q1.GetFirst() << endl;
		for (int k = 1; k < q1.Size(); k++)
		{
			cout << q1.GetNext() << endl;
		}
	}
	else
	{
		cout << "nothing. The queue was empty." << endl;
	}
}