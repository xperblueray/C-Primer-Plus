// carrot.cppp -- food processing program
// uses and displays a variable

#include <iostream>

int main()
{
	using namespace std;

	int carrots;                                // declare an integer variable

	carrots = 25;                               // assign a value of the variable
	cout << "I have ";
	cout << " carrots.";
	cout << endl;
	carrots = carrots - 1;                      // modify the variable
	cout << "Crunch, crunch. Now I have" << carrots << " carrots." << endl;
	cin.get();
	return 0;
}