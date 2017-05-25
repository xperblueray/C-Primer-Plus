// delete.cpp -- using the delete operator
#include <iostream>
#include <cstring>
using namespace std;
char * getname();
int main()
{
	char * name;         // create pointer but no storage

	name = getname();    // assign address of string to name
	cout << name << " at " << (int *)name << endl;
	delete [] name;

	name = getname();
	cout << name << " at " << (int *)name << endl;
	delete[] name;

	cin.get();
	return 0;

}

char * getname()                    // return pointer to new string 
{
	char temp[80];                  // temorary storage
	cout << "Enter last name: ";
	cin >> temp;
	cin.get();
	char * pn = new char[strlen(temp) + 1];
	strcpy(pn, temp);               // copy string into smaller space

	return pn;                      // temp lost when function ends
}

