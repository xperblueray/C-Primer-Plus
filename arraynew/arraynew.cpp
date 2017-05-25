// arraynew.cpp : Defines the entry point for the console application.  
// 
#include "stdafx.h"
#include <iostream>


int main()
{
	using namespace std;
	double * p3 = new double [3];
	p3[0] = 0.2;
	p3[1] = 0.5;
	p3[2] = 0.8;

	cout << "p3[1] is " << p3[1] << ".\n";
	cout << "p3 is " << p3 << endl;
	p3 = p3 + 1; 
	cout << "Now p3[0] is " << p3[0] << " and ";
	cout << "p3 is " << p3 << endl;
	cout << "p3[1] is " << p3[1] << ".\n"; 
	cout << "p3 is " << p3 << endl;
	p3 = p3 -1;
	cout << "p3 is " << p3 << endl;
	delete [] p3;
	cin.get();
    return 0;
}

