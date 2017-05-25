/*************************************************************************
	> File Name: textin3.cpp
	> Author: 
	> Mail: 
	> Created Time: Fri 21 Apr 2017 10:09:41 PM DST
 ************************************************************************/

#include<iostream>
using namespace std;
int main()
{
    char ch;
    int count = 0;
    cin.get(ch);   // attempt to read a char 
    while(cin.fail() == false)    // test for EOF
    {
        cout << ch;           // echo character
        ++count;
        cin.get(ch);         // attempt to read another char
    }
    cout << endl << count << " characters read\n";
    return 0;
}
