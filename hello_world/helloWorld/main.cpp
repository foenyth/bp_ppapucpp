//
//  main.cpp
//  helloWorld
//
//  Created by F on 25/7/16.
//  Copyright © 2016 phantom. All rights reserved.
//

#include "std_lib_facilities.h"

//  convert from inches to centimeters or centimeters to inches
//  a suffix 'i' or 'c' indicates the unit of the input

int main()
{
    std::cout << "Please enter a digit: ";
    char a;
    std::cin >> a;
    switch (a) {
            case'0': case '2': case '4': case '6': case '8':
                std::cout << a << " is even.\n";
            break;
            case '1': case '3': case '5': case '7': case '9':
                std::cout << a << " is odd.\n";
            break;
            default:
                std::cout << a << " is not a digit.\n";
            break;
    }
}
