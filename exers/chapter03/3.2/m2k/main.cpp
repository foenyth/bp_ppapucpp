//
//  main.cpp
//  exercises
//
//  Created by F on 13/8/16.
//  Copyright © 2016 phantom. All rights reserved.
//
//  Q: “Write a program in C++ that converts from miles to kilometers. Your program should have a reasonable prompt for the user to enter a number of miles. Hint: There are 1.609 kilometers to the mile.”


#include <iostream>
using namespace std;

//#define kms 1.609

int main()
{
    cout << "Hey! Hi, human! I can convert miles to kilometres. Don't believe me?\n";
    cout << "Why don't you try?: ";
    float miles;
    cin >> miles;
    float kms = 1.609;
    cout << "\n" << miles << " miles(s) in kilometres = " << miles * kms << "\n\n";
    
    return 0;
}