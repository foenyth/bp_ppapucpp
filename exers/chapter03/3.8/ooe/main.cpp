//
//  main.cpp
//  ooe - Odd or Even determiner
//
//  Created by F on 16/8/16.
//  Copyright © 2016 phantom. All rights reserved.
//

#include <iostream>

int main() {
    //  Ask user to put the integer value
    std::cout << "Please enter an integer value: ";
    
    int val = 0;
    std::cin >> val;
    std::cout << "The value is " << val << ".\n";
    
    //  Check the remainder (modulo)
    std::string ooe = "even";
    if (val%2)
        ooe = "odd";
    //  If it's even, print "The value (input) is an even number."
    //  If it's odd, print "The value (input) is an odd number."
    std::cout << "\nThe value " << val << " is an " << ooe << " number.\n\n";
    
    return 0;
}
