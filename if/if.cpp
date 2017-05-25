/*************************************************************************
	> File Name: if.cpp
	> Author: 
	> Mail: 
	> Created Time: Sun 23 Apr 2017 11:43:30 AM DST
 ************************************************************************/

#include<iostream>
int main()
{
    using std::cin;
    using std::cout;
    char ch;
    int spaces = 0;
    int total = 0;
    cin.get(ch);
    while (ch != '.')
    {
        if(ch == ' ')  ++spaces;
        ++total;
        cin.get(ch);
    }
    cout << spaces << " spaces,";
    cout << total << " characters total in this sentence.\n";
    return 0;
}
