// strtype1.cpp : Defines the entry point for the console application.
// strtype1.cpp -- using the C++ string class

#include "stdafx.h"
#include <iostream>
#include <string>


int main()
{
	using namespace std;
	char charr1[20];
	char charr2[20]= "jaguar";
	string str1;
	string str2 = "panther";
	
	char first_date[] = {"Le Chapon Dodu"};
	char second_date[] {"The Elegant Plate"};
	string third_date = {"The Bread Bowl"};
	string fourth_date {"Hank's Fine Eats"};


	cout << "Enter a king of feline: ";
	cin >> charr1;
	cin.get();
	cout << "Enter another kind of feline: ";
	cin >> str1;
	cin.get();
	cout << "Here are some felines:\n";
	cout << charr1 << " " << charr2 << " " << str1 << " " << str2 // sue cout for output
		 << endl;
	cout << "The third letter in " << charr2 << " is " << charr2[2] << endl;
	cout << "The third letter in " << str2 << " is " << str2[2] << endl;
	cin.get();

    return 0;
}

