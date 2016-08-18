//
//  main.cpp
//  operateto
//
//  Created by F on 16/8/16.
//  Copyright © 2016 phantom. All rights reserved.
//

#include "std_lib_facilities.h"

int main() {
    string operation;
    double val1 = 0;	// first/leftmost operand
    double val2 = 0;	// second/rightmost operand
    cout << "Please enter an operation (+, -, *, /, plus, minus, mul, div) followed by two floating-point values separated by a space: ";
    
    while(cin >> operation >> val1 >> val2) {	// we do the following as long as we get "good" input
        // and then stop
        // loops will be explainied in detail in Chapter 4
        double res = 0;
        if (operation=="plus" || operation=="+") res = val1+val2;
        else if (operation=="minus" || operation=="-") res = val1-val2;
        else if (operation=="mul" || operation=="*") res = val1*val2;
        else if (operation=="div" || operation=="/") {
            if (val2==0) error("trying to divide by zero");
            res = val1/val2;
        }
        else error("sorry: bad operator: ",operation);
        
        cout << val1 << operation << val2 << " == " << res <<'\n';
        cout << "Please try again: ";
    }
    cout << "Exit because of bad input.\n";
    
    return 0;
}
