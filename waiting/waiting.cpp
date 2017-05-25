//waiting.cpp -- using clock() in a time-delay loop
#include <iostream>
#include <ctime>  // descripbes clock() function, clock_t type 
int main()
{
	using namespace std;
	cout << "Enter the delay time, in seconds: ";
	float secs;
	cin >> secs;
	cin.get();
	clock_t delay = secs * CLOCKS_PER_SEC;    // convert to clock ticks
	cout << "starting\a\n";
	clock_t start = clock();
	while (clock() - start < delay)
		;
	cout << "done \a\n";
	cin.get();
	return 0;
}
