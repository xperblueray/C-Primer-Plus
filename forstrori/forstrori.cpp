// forstrori.cpp -- The textbook code of this
#include <iostream>
#include <string>
int main()
{
	using namespace std;
	cout << "Enter a string: ";
	string testword;
	cin >> (testword);


	for (int i = testword.size() - 1; i >= 0; i--)
		cout << testword[i];
	cin.get();
	cout << "\n" << testword.length() << "\nBye!";

	cout << "The self add and * usage: \n";
	double arr[5] = { 21.1, 32.8, 23.4, 45.2, 37.4 };
	double *pt = arr;
	++pt;
	cout << *++pt << endl;
	cout << ++*pt << endl;
	cout << (*pt)++ << endl;
	cout << *pt++ << endl;
	// cout << "The previous one is " << *--pt << endl;
	cout << "The final state of pt: " << *pt << endl;
	for (int i = 0; i < 5; i++)
		cout << arr[i] << " ";
	cout << "\nGoodbye!";
	cin.get();
	return 0;
}