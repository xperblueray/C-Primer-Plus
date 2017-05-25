// addpntrs.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>


int main()
{
	using namespace std;
	double wages[3] = {10000.0, 20000.0, 30000.0};
	short stacks[3] = {3, 2, 1};
	short tell[10];
	cout << "The tell is " << tell << endl;
	cout << "The address of tell is " << &tell << endl;
	cout << "size of tell is " << sizeof(tell) << endl;
	cout << "size of the address of tell is " << sizeof(&tell) << endl;
	cout << "tell + 1 = " << tell + 1 << endl;
	cout << "&tell + 1 = " << &tell + 1 << endl;

	// Here are two ways to get the address of an array
	double * pw = wages;
	short * ps = &stacks[0];

	cout << "pw = " << pw << ", *pw = " << *pw << endl;
	pw = pw + 1;
	cout << "add 1 to the pw pointer:\n";
	cout << "pw = " << pw << ", *pw = " << *pw << "\n\n";
	cout << "ps = " << ps << ", *ps = " << *ps << endl;
	ps = ps + 1;
	cout << "add 1 to the ps pointer:\n";
	cout << "ps = " << ps << ", *ps = " << *ps << "\n\n";
	
	cout << "access two elements with array notation\n";
	cout << "stacks[0] = " << stacks[0] << ", stacks[1] = " << stacks[1] << endl;
	cout << "access two elements with pointer notation\n";
	cout << "*stacks = " << *stacks << ",*(stacks + 1)  = " << *(stacks + 1) << endl;

	cout << sizeof(wages) << " = size of wages array\n";
	cout << sizeof(pw) << " = size of pw pointer\n";
	cin.get();
    return 0;
}

