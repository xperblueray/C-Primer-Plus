// ourfunc1.cpp -- reposotioning the using directive
#include <iostream>
using namespace std;
void simon(int);

int main()
{
	simon(3);
	cout << "Pick a number: ";
	int count;
	cin >> count;
	cin.get();
	simon(count);
	cout << "Done!" << endl;
	cin.get();
	return 0;
}
void simon(int n)
{
	cout << "Simon says touch your toes " << n << " times." << endl;

}