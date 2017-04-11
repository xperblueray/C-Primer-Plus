// instr1.cpp : Defines the entry point for the console application.
// instr1.cpp -- reading more thean one string


#include "stdafx.h"
#include <iostream>


int main()
{
	using namespace std;
	const int ArSize = 20;
	char name[ArSize];
	char dessert[ArSize];

	cout << "Enter your name:\n";
	cin >> name;
	cout << "Enter your favorite dessert: \n";
	cin >> dessert;
	cin.get();
	cout << "I have some delicious " << dessert;
	cout << " for you, " << name  << ".\n";
	cin.get();

    return 0;
}

