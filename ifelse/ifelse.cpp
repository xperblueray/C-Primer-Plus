/*************************************************************************
	> File Name: ifelse.cpp
	> Author: 
	> Mail: 
	> Created Time: Sun 23 Apr 2017 11:52:43 AM DST
 ************************************************************************/

#include<iostream>
#include<typeinfo>
int main()
{
    char ch;
    int i;

    std::cout << "Type, and I shall repeat.\n";
    std::cin.get(ch);
    while (ch != '.')
    {
        if (ch == '\n')
            std::cout << ch;
        else
        {
            ++ch;
            // std::cout << (typeid(ch + 1).name()) << std::endl;
           //  std::cout << (typeid(++ch).name()) << std::endl;
            // std::cout << typeid(i).name() << std::endl;
            
        }
         //   std::cout << ch + 1;

        std::cin.get(ch);
    }
    std::cout << "\nPlease excute the slight confusion.\n";
    // std::cin.get();
    return 0;
}
