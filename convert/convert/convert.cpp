// convert.cpp -- converts stone to pounds
#include <iostream>
int stonetolb(int); // function prototype
int main()
{
	using namespace std;
	int stone;
	cout << "Enter the weight in stone: ";
	cin >> stone;
	cin.get();
	int pounds = stonetolb(stone);
	cout << stone << " stone = ";
	cout << pounds << " pounds." << endl;
	cin.get();
	return 0;
}

int stonetolb(int sts)
{
	return 14 * sts;
}