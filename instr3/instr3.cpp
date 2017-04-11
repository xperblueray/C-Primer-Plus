// instr3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>



int main()
{
	using namespace std;
	const int ArSize = 20;
	char name[ArSize];
	char dessert[ArSize];

	cout << "Enter you name:\n";
	cin.get(name, ArSize).get();
	cout << "Enter your favorite dessert:\n";
	cin.get(dessert,ArSize).get();
	cout << "I have some delicious " << dessert;
	cout << " for you, " << name << ".\n";
	cin.get();
	

    return 0;
}

