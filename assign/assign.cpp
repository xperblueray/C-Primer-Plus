// assign.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <climits>


int main()
{
	using namespace std;
	cout.setf(ios_base::fixed, ios_base::floatfield);
	float tree = 3;  //int converted to float
	int guess(3.9832); // double converedt to int
	int debt = 7.2E12; //result note defined in C++
	cout << "tree = " << tree << endl;
	cout << "guess = " << guess << endl;
	cout << "debt = " << debt << endl;
	cout << 
	cin.get();

    return 0;
}

