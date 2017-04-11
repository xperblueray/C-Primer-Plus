// numstr.cpp : Defines the entry point for the console application.
// numstr.cpp -- following number input with line input

#include "stdafx.h"
#include <iostream>


int main()
{
	using namespace std;
	cout << "What your house built?\n";
	int year;
	cin >> year;
	cout << "What is its street address?\n";
	char address[80];
	cin.getline(address, 80);
	cout << "Year built: " << year << endl;
	cout << "Address: " << address << endl;
	cout << "Done!\n";
	cin.get();

    return 0;
}

