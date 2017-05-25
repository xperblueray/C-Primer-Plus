// pointer.cpp : Defines the entry point for the console application.
// pointer.cpp -- our first pointer variable

#include "stdafx.h"
#include <iostream>


int main()
{
	using namespace std;
	int updates = 6;            // declare a variable
	int * p_updates;            // declare pointer to an int
	p_updates = &updates;       // assign address of int to pointer


	// express values two ways 
	cout << "Values: updaets = " << updates;
	cout << ", *p_updates = " << *p_updates << endl;

	// express address two ways
	cout << "Addresss: &updates = " << &updates;
	cout << ", p_updates = " << p_updates << endl;

	// use pointer to change value
	*p_updates = *p_updates + 1;
	cout << "Now updates = " << updates << endl;
	cin.get();
    return 0;
}

