//
//  main.cpp
//  names
//
//  Created by F on 15/8/16.
//  Copyright © 2016 phantom. All rights reserved.
//

#include <iostream>

int main() {
    std::cout << "Please enter three string values seperated by space: ";
    
    std::string s1 = " ";
    std::string s2 = " ";
    std::string s3 = " ";
    std::cin >> s1 >> s2 >> s3;
    
    std::cout << "Values are: " << s1 << ", " << s2 << " and " << s3 << ".\n";
    
    std::string first = " ";
    std::string middle = " ";
    std::string last = " ";
    
    if (s1 <= s2 && s1<=s3) {
        first = s1;
        if (s2<=s3) {
            middle = s2;
            last = s3;
        }
        else {
            middle = s3;
            last = s2;
        }
    }
    else if (s2 <=s1 && s2 <= s3) {
        first = s2;
        if (s1<=s3) {
            middle = s1;
            last = s3;
        }
        else {
            middle = s3;
            last = s1;
        }
    }
    else {
        first = s3;
        if (s1<=s2) {
            middle = s1;
            last = s2;
        }
        else {
            middle = s2;
            last = s1;
        }
    }
    
    std::cout << "Well, we have sorted by alphabetically: " << first << ", " << middle << ", " << last << "\n\n";
    
    
    return 0;
}
