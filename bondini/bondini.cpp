// bondini.cpp -- using escape sequences
#include <iostream>
int main()
{
	using namespace std;
	cout << "\aOperation \"HyperHype\" is now actived!\n";
	cout << "Enter your agent code: _______ \b\b\b\b\b\b\b\b";
	long code;
	cin >> code;
	cin.get();
	cout << "\aYou entered " << code << "...\n";
	cout << "\aCode verified! Proceed with Plan Z3!\n";
	cin.get();
	return 0;
}