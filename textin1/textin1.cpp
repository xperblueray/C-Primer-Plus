// textin1.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include <iostream>


int main()
{
	using namespace std;
	char ch;
	int count = 0;
	cout << "Enter characters; enter # to quit:\n";
	cin >> ch;
	while (ch != '#')
	{
		cout << ch;
		++count;
		cin >> ch;
	}
	
	cout << endl << count << " characters read";
	

    return 0;
}

