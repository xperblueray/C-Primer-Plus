// newstrct.cpp -- using new with a structure
#include <iostream>

struct inflatable // structure definition
{
	char name[20];
	float volume;
	double price;
};
int main()
{
	using namespace std;
	inflatable * ps = new inflatable;   // allot memory for structure
	cout << "Enter a name of inflatable item: ";
	cin.get(ps->name, 20);
	cout << "Enter volume in cubic feet: ";
	cin >> (*ps).volume;
	cout << "Enter price: $";
	cin >> ps->price;
	cin.get();



	cout << "Name: " << (*ps).name << endl;
	cout << "Volume: " << ps->volume << endl;
	cout << "Price: " << ps->price << endl;
	delete ps;
	cin.get();
	return 0;


}