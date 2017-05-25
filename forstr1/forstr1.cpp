// forstr1.cpp -- reverse traverse the string
#include <iostream>
using namespace std;
int main()
{
	char a[20];
	cout << "Enter a string(<21): ";
	cin >> a;
	cin.get();
	for (int i = strlen(a) - 1; i > -1; i--)
		cout << a[i];
	cin.get();
	return 0;
}