//
//  main.cpp
//  coins
//
//  Created by F on 18/8/16.
//  Copyright © 2016 phantom. All rights reserved.
//

#include "std_lib_facilities.h"

int main() {
    int pennies = 0;
    int nickles = 0;
    int dimes = 0;
    int quarters = 0;
    int half_dollars = 0;
    int dollars = 0;
    
    std::cout << "How many pennies do you have? : ";
    if (std::cin >> pennies) {
        if (pennies > 1) {
            std::cout << "You have " << pennies << " pennies.\n";
        }
        else {
            std::cout << "You have " << pennies << " penny.\n";
        }
    }
    
    std::cout << "How many nickles do you have? : ";
    if (std::cin >> nickles) {
        if (nickles > 1) {
            std::cout << "You have " << nickles << " nickles.\n";
        }
        else {
            std::cout << "You have " << nickles << " nickle.\n";
        }
    }
    
    std::cout << "How many dimes do you have? : ";
    if (std::cin >> dimes) {
        if (dimes > 1) {
            std::cout << "You have " << dimes << " dimes.\n";
        }
        else {
            std::cout << "You have " << dimes << " dime.\n";
        }
    }
    
    std::cout << "How many quarters do you have? : ";
    if (std::cin >> quarters) {
        if (quarters > 1) {
            std::cout << "You have " << quarters << " quarters.\n";
        }
        else {
            std::cout << "You have " << quarters << " quarter.\n";
        }
    }
    
    std::cout << "How many half dollars do you have? : ";
    if (std::cin >> half_dollars) {
        if (half_dollars > 1) {
            std::cout << "You have " << half_dollars << " half dollars.\n";
        }
        else {
            std::cout << "You have " << half_dollars << " half dollar.\n";
        }
    }
    
    std::cout << "How many dollars do you have? : ";
    if (std::cin >> dollars) {
        if (dollars > 1) {
            std::cout << "You have " << dollars << " dollars.\n";
        }
        else {
            std::cout << "You have " << dollars << " dollar.\n";
        }
    }
    
    double total = pennies + (nickles * 5) + (dimes * 10) + (quarters * 25) + (half_dollars * 50) + (dollars * 100);
    std::cout << "The value of all of your coin is " << total << '\n';
    return 0;
}
