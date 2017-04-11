// chartype.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>


int main()
{
	using namespace std;
	char ch; // declare a char variable
	cout << "Enter a character: " << endl;
	cin >> ch;
	cin.get();
	cout << "Hola! ";
	cout << "Thank you for the " << ch << " character." << endl;
	cin.get();

    return 0;
}

