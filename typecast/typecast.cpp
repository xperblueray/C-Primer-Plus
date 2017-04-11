// typecast.cpp -- forcing type changes
#include <iostream>
int main()
{
	using namespace std;
	int auks, bats, coots;

	// the following statement adds the values as double,
	// then converts the result to int
	auks = 19.99 + 11.99;

	// these statements add values as int 
	bats = (int) 19.99 + (int) 11.99;  // old C syntax
	coots = int (19.99) + int (11.99); // new C++ syntax
	cout << "auks = " << auks << ", bats = " << bats; 
	cout << ", coots = " << coots << endl;

	char ch = 'Z';
	cout << "The code for " << ch << " is ";
	cout << int(ch) << endl;
	cout << "Yes, the code is ";
	cout << static_cast<int>(ch) << endl;


	auto n = 100;
	auto x = 1.5;
	auto y = 1.3e12L;
	cout << sizeof (bool) << endl;
	cout << sizeof (char) << endl;
	cout << sizeof (signed char) << endl;
	cout << sizeof (unsigned char) << endl;
	cout << sizeof (short ) << endl;
	cout << sizeof (unsigned short) << endl;
	cout << sizeof (int) << endl;
	cout << sizeof (unsigned int) << endl;
	cout << sizeof (long) << endl;
	cout << sizeof (unsigned long) << endl;
	cout << sizeof (long long ) << endl;
	cout << sizeof (unsigned long long) << endl;
	cout << sizeof (float) << endl;
	cout << sizeof (double) << endl;
	cout << sizeof (long double) << endl;
	


	cin.get();
	return 0;
}