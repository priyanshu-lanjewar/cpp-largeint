// LargeInt.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include "largeint"

int main()
{
    largeint l   = "0";
    std::cout << l;
    std::cin >> l;
    largeint ll = l++;
    std::cout << ll;
    std::cout << l;
    //i.print();
}

