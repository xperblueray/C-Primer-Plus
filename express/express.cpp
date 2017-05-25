// express.cpp -- values of expressions
#include <iostream>
int main()
{
	using namespace std;
	int x;

	cout << "The expression x = 100 has the value ";
	cout << (x = 100) << endl;
	cout << "The expression x > 4 has the value ";
	cout << (x > 4) << endl;
	cout << "The expression x < 4 has the value ";
	cout << (x < 4) << endl;
	cout.setf(ios_base::boolalpha);         // a newer C++ feature
	cout << "The expression x < 3 has the value ";
	cout << (x < 3) << endl;
	cout << "The expression x > 3 has the value ";
	cout << (x > 3) << endl;
	x = 0;
	for (x = 0; x < 5; x++)
		cout << x << endl;
	cout << "X is " << x << endl;
	for (int i = 0; i < 5; i++)
		cout << i << endl;
	cin.get();
	return 0;
}