//
//  main.cpp
//  helloWorld
//
//  Created by Saw on 25/7/16.
//  Copyright © 2016 S. All rights reserved.
//

#include <iostream>
//#include <cmath>
//#include "std_lib_facilities.h"

using namespace std;

// read first and second name

int main()
{
    cout << "Enter the name of the person you want to write to: ";
    string first_name; // first_name is a variable of type string
    cin >> first_name; // read characters into first_name
    cout << "\nDear " << first_name << ",\n";
    cout << "How are you?\n";
    cout << "I am fine. I miss you.\n";
    
    cout << "\nPlease enter the first name of your friend: ";
    string friend_name; // friend_name is a variable of type string
    cin >> friend_name; // read characters into friend_name
    cout << "\nHave you seen " << friend_name << " lately?\n";
    
    char friend_sex = 0;
    cout << "\nPlease enter your gender (F/M): ";
    cin >> friend_sex;
    
    if (friend_sex == 'M')
        cout << "\nIf you see " << friend_name << ", please ask him to call me. Thanks you!\n";
    else if (friend_sex == 'F')
        cout << "\nIf you see " << friend_name << ", please ask her to call me. Thanks you!\n";
    
    cout << "\nPlease enter your age: ";
    int age;
    cin >> age;
    cout << "\nI hear you just had a birthday and you are " << age << " years old.\n";
    if (age <= 0 || age >= 110)
        cout << "You're kidding!\n";
    else if (age <= 12)
        cout << "Next year you will be " << age+1 << ".\n";
    else if (age  == 17)
        cout << "Next year you will be able to vote.\n";
    else if (age > 70)
        cout << "I hope you are enjoying retirement.\n";
    
    cout << "\nYours sincerely, \n";
    cout << "Cpt. S\n\n";
    
    return 0;
}
