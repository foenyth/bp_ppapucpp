//
//  main.cpp
//  currency_convertion
//
//  Created by F on 23/8/16.
//  Copyright © 2016 phantom. All rights reserved.
//

#include "std_lib_facilities.h"

int main()
{
    constexpr double yen_per_dollar = 0.0100;
    constexpr double euro_per_dollar = 1.13;
    constexpr double pound_per_dollar = 1.32;
    constexpr double krona_per_dollar = 8.42;
    double amount = 1;
    char unit;
    std::cout << "Please enter an amount follwed by a unit ('k', 'y', 'e', 'p'): ";
    
    std::cin >> amount >> unit;
    
    switch (unit) {
        case'k':
            std::cout << amount << "k == " << krona_per_dollar * amount << "d.\n";
            break;
        case'y':
            std::cout << amount << "y == " << yen_per_dollar * amount << "d.\n";
            break;
        case'e':
            std::cout << amount << "e == " << euro_per_dollar * amount << "d.\n";
            break;
        case'p':
            std::cout << amount << "p == " << pound_per_dollar * amount << "d.\n";
            break;
        default:
            std::cout << "Sorry, we don't know a unit called " << unit << "\n";
            break;
    }
}
