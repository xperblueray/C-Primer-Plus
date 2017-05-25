/*************************************************************************
	> File Name: returnValue.cpp
	> Author: 
	> Mail: 
	> Created Time: Sun 23 Apr 2017 12:35:58 PM DST
 ************************************************************************/

#include<iostream>
#include <typeinfo>
using namespace std;
int main() 
{
    int i;
    int * pi;
    int * x;
    char * ch;
    cout << "int is " << typeid(int).name() << '\n';
    cout << "  i is " << typeid(i).name() << '\n';
    cout << " pi is " << typeid(pi).name() << '\n';
    cout << "  x is " << typeid(x).name() << '\n';
    cout << " ch is " << typeid(ch).name() << '\n';
    cout << "*pi is " << typeid(*pi).name() << '\n' ;

    return 0;
}

