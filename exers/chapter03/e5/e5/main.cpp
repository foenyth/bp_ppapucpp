//
//  main.cpp
//  e5
//
//  Created by Saw on 14/8/16.
//  Copyright © 2016 phantom. All rights reserved.
//

#include <iostream>

int main()
{
    double val1 = 0;
    double val2 = 0;
    std::cout << "Please enter two floating-point values seperated by space: ";
    std::cin >> val1 >> val2;
    std::cout << "values: " << val1 << " and " << val2;
    
    // Largest and smallest
    if  (val1>val2)
        std::cout << val1 << " is the largest.\n";
    else if (val1<val2)
        std::cout << val2 << " is the largest.\n";
    else
        std::cout << val1 << " and " << val2 << " are equal.\n";

    // Sum
    std::cout << "The sum of (val1 + val2): " << val1 + val2 << '\n';

    // Different
    std::cout << "The different of (val1 - val2): " << val1 - val2 << '\n';
    
    // Product
    std::cout << "The product of (val1 x val2): " << val1 * val2 << '\n';
    
    // Ratio
    if (val2==0)
        std::cout << "Nice try! But I won't divide by zero.\n";
    else
        std::cout << "The ratio of (val1 / val2): " << val1 / val2 << "\n\n";
    
    return 0;
}
