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
    constexpr double cm_per_inch = 2.54;    //  number of centimeters in an inch
    double length = 1;  //  length in inches or centimeters
    char unit = 0;
    std::cout << "Please enter a length followed by a unit (c or i): ";
    
    std::cin >> length >> unit;
    
    if (unit == 'i')
        std::cout << length << "in == " << cm_per_inch * length << "cm.\n";
    else
        std::cout << length << "cm == " << length / cm_per_inch << "in.\n";
    
    
    return 0;
}
