//
//  main.cpp
//  spelledout
//
//  Created by F on 16/8/16.
//  Copyright © 2016 phantom. All rights reserved.
//

#include "std_lib_facilities.h"

int main() {
    //  Ask user to input one of the provided numbers
    std::cout << "Please choose one of these numbers: (0, 1, 2, 3 and 4) ";
    
    //  Take input
    int val = 0;
    std::cin >> val;
    //    std::cout << "You chose " << val << ".\n";
    
    if (val == 0)
        std::cout << "\nYou chose '0'. It's the zero.\n";
    else if (val == 1)
        std::cout << "\nIt's the one.\n";
    else if (val == 2)
        std::cout << "\nIt's the two.\n";
    else if (val == 3)
        std::cout << "\nIt's the three.\n";
    else if (val == 4)
        std::cout << "\nIt's the four.\n";
    else
        std::cout << "Come on, " << val << " is not a number I know!\n";
    
    return 0;
}
