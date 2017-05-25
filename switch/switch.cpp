/*************************************************************************
	> File Name: switch.cpp
	> Author: 
	> Mail: 
	> Created Time: Wed 26 Apr 2017 09:18:26 AM DST
 ************************************************************************/

#include<iostream>
using namespace std;
void showmenu();   // function prototypes
void report();
void comfort(); 
int main()
{
    showmenu();
    int choice;
    cin >> choice;
    while (choice != 5)
    {
        switch(choice)
        {
            case 1 : cout << "\a\n";
            break;
            case 2 : report();
            break;
            case 3 : cout << "The boss was in all day.\n";
            break;
            case 4 : comfort();
            break;
            default : cout << "That's not a choice.\n";
        }
        showmenu();
        cin >> choice;
    }
    cout << "Bye!\n";
    return 0;

}
void showmenu()
{
    cout << "Please enter 1, 2, 3, 4, or 5:\n"
    "1) alarm                      2) report \n"
    "3) alibi                      4) comfort\n"
    "5) quit\n";
}
void report()
{
    cout << "It's been an aexcellent week for business.\n"
    "Sales are up 120%. Expenses are down 35%.\n";
}
void comfort()
{
    cout << "Your employees think you are the finest CEO\n"
    "in the industry. The bord of directors think\n"
    "you are the finest CEO in the industry.\n";

}
