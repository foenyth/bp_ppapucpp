//
//  main.cpp
//  helloWorld
//
//  Created by Saw on 25/7/16.
//  Copyright © 2016 S. All rights reserved.
//

#include <iostream>
#include <cmath>

using namespace std;

// read first and second name

int main()
{
    double d=0;
    while (cin>>d) {    // repeat the statments below
                        // as long as we type in numbers
        int i = d;      // try to squeeze a double into an int
        char c = i;     // try to squeeze an int into a char
        int i2 = c;     // get the integer value of the character
        cout << "d==" << d  // the original double
                << " i==" << i   // converted to int
                << " i2==" << i2 // int value of char
                << " char("<<c<<")\n";  // the char
    }
}
