// arith.cpp -- some C++ arithmetic
#include <iostream>
int main()
{
	using namespace std;
	float hats, heads;
	cout.setf(ios_base::fixed, ios_base::floatfield); // fixed-point
	cout << "Enter a number: ";
	cin >> hats;
	cin.get();
	cout << "Enter another number: ";
	cin >> heads;
	cin.get();

	cout << "hats = " << hats << "; heads = " << heads << endl;
	cout << "hats + heads = " << hats + heads << endl;
	cout << "hats - heads = " << hats - heads << endl;
	cout << "hats * heads = " << hats * heads << endl;
	cout << "hats / heads = " << hats / heads << endl;
	cin.get();
	return 0;
}