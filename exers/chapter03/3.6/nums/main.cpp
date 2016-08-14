//
//  main.cpp
//  nums
//
//  Created by F on 15/8/16.
//  Copyright © 2016 phantom. All rights reserved.
//

#include <iostream>

int main() {
    std::cout << "Please enter three integers seperated by space, will you?: ";
    int one = 0;
    int two = 0;
    int three = 0;
    std::cin >> one >> two >> three;
    std::cout << "Values are: " << one << ", " << two << " and " << three << '\n';
    
    std::cout << "Please confirm, these are the numbers you like to process with?: (Y/n) \n";
    std::cout << "Just kidding! You can't change it whatsoever. Bruh!\n";
    
    /*
     Posibilities are:
     4, 6, 10
     4, 10, 6
     6, 10, 4
     6, 4, 10
     10, 4, 6
     10, 6, 4
    */
    
    //  Idea for solution:
    //      Just test which value is the smallest and put it into "smallest"
    //      then test which of the remaining two values is smaller and put it into "middle"
    //      the remaining value goes into the "largest"
    
    int smallest = 0;
    int middle = 0;
    int largest = 0;
    
    if (one<=two && one<=three) { // && means 'and'
        smallest = one;
        if (two<=three) {
            middle = two;
            largest = three;
        }
        else {
            middle = three;
            largest = two;
        }
    }
    else if (two<=one && two<=three) {
        smallest = two;
        if (three<=one) {
            middle = three;
            largest = one;
        }
        else {
            middle = one;
            largest = three;
        }
    }
    else { // since neither one nor two was smaller than three, three must be the smallest
        smallest = three;
        if (one<=two) {
            middle = one;
            largest = two;
        }
        else {
            middle = two;
            largest = one;
        }
    }
    
    std::cout << "Finally, values are sorted: " << smallest << ", " << middle << ", " << largest << '\n';
    
    return 0;
}
