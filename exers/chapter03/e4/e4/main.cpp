//
//  main.cpp
//  e4
//
//  Created by F on 13/8/16.
//  Copyright © 2016 phantom. All rights reserved.
//

#include <iostream>
using namespace std;
//#include "std_lib_facilities.h"
//  note that different compilers/SDEs keep header files in different places
//  so that you may have to use "../std_lib_facilities.h" or "../../std_lib_facilities.h"
//  the ../ notation means "look one directory/folder up from the current directory/folder

int main()
try
{
    int val1 = 0;
    int val2 = 0;
    cout << "Please enter two integer values seperated by a space: ";
    cin >> val1 >> val2;
//    if (!cin) error("something went bad with the read");
    cout << "values : " << val1 << " " << val2 << '\n';
    
    if (val1<val2)
        cout << val1 << " is the smallest.\n";
    else if (val2<val1)
        cout << val2 << " is the smallest.\n";
    else
        cout << val1 << " and " << val2 << " are equal.\n";
//    if (val2<<val1) cout << val2 << " is the smallest.\n";
//    if (val1==val2) cout << val1 << " and " << val2 << " are equal.\n";
    
    cout << "sum : " << val1+val2 << '\n';
    cout << "product : " << val1*val2 << '\n';
    if (val2==0)
        cout << "good try! but I don't divide by zero.\n";
    else
        cout << "ratio (val1/val2): " << val1/val2 << '\n'; // note that this is integer division so 5/2 is 2 (not 2.5)
    
    // some more tests
    if (val1<0)
        cout << val1 << " is negative.\n";
    cout << "difference (val1-val2) : " << val1-val2 << '\n';
    if (val2!=0)
        cout << "remainder (val1%val2) : " << val1%val2 << '\n';
    cout << "square(val1) : " << val1*val1 << "\n\n";
    
    return 0;
}
    catch (runtime_error e) {   // This code is to produce error messages; it will be described in Chapter 5
        cout << e.what() << '\n';
    }
