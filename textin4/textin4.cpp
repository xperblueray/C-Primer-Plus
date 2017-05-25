/*************************************************************************
	> File Name: textin4.cpp
	> Author: 
	> Mail: 
	> Created Time: Sat 22 Apr 2017 04:01:11 PM DST
 ************************************************************************/

#include<iostream>
#include <stdio.h>
using namespace std;
int main(void)
{
    int ch;          // should be int, not char
    int count = 0;

    while ((ch = cin.get()) != EOF)  // test for end-of-file
    {
        cout.put(char(ch));
        ++count;
    }
    cout << endl << count << " characters read\n";
    return 0;
}
