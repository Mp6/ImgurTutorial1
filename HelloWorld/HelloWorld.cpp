// HelloWorld.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	//Declare an integer
	int i;

	//Output Hello World! to the console
	cout << "Hello World!" << endl;

	//Output a question to the console
	cout << "Please enter a number: ";

	//Grab a number
	cin >> i;

	//Output the number plus four
	cout << (i + 4) << endl;

	if (i + 4 == 7)
	{
		cout << "Your number is equal to seven!" << endl;
	}
	else
	{
		cout << "Your number is not equal to seven!" << endl;
	}

	//Wait for a key press before closing the window.
	system("pause");

	//Return exit success
    return 0;
}

