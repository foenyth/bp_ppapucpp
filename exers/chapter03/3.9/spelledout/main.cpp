//
//  main.cpp
//  spelledout
//
//  Created by F on 16/8/16.
//  Copyright © 2016 phantom. All rights reserved.
//

#include <iostream>

int main() {
    //  Ask user to input one of the provided numbers
    std::cout << "Please enter an integer as a text string: ";
    
    std::string s;
    
    while (std::cin >> s) { //  This is a while loop
        if (s == "zero")
            std::cout << s << " has the value 0.\n";
        else if (s == "one")
            std::cout << s << " has the value 1.\n";
        else if (s == "two")
            std::cout << s << " has the value 2.\n";
        else if (s == "three")
            std::cout << s << " has the value 3.\n";
        else if (s == "four")
            std::cout << s << " has the value of 4.\n";
        else
            std::cout << s << " does not have a numric value I understand.\n";
        
        std::cout << "Please enter another integer as a text string: ";
    }
    
    return 0;
}
