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
    int a = 20000;
    char c = a; // try squeeze a large int into a small char
    int b = c;
    if (a!=b) // != means "not equal"
        cout << "Oops!: " << a << " != " << b << '\n';
    else
        cout << "Wow! We have large characters.\n";
}
