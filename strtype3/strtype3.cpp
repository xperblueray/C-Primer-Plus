// strtype3.cpp : Defines the entry point for the console application.
// strtype3.cpp -- more string class features

#include "stdafx.h"
#include <iostream>
#include <string>
#include <cstring>



int main()
{
	using namespace std;
	char charr1[20];
	char charr2[20] = "jaguar";
	string str1;
	string str2 = "panther";

	// assignment for string objects and character arrays
	str1 = str2;
	strcpy_s(charr1, charr2);


	// appending for string objects and character arrays
	str1 += " paste";
	strcat_s(charr1, " juice");


	// ffinding the length of a string object and a C-style string 
	int len1 = str1.size();
	int len2 = strlen(charr1);

	cout << "The string " << str1 << " contains " << len1 << " hcatacters.\n";
	cout << "The string " << charr1 << " contains "  << len2 << " characters.\n";
	cin.get();
    return 0;
}