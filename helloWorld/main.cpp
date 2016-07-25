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

int main() {
    cout << "Please enter two names\n";
    string first;
    string second;
    cin >> first >> second; // read two strings
    if (first == second) cout << "that's the same name twice\n";
    if (first < second)
        cout << first << " is alphabetically before " << second << '\n';
    if (first > second)
        cout << first << " is alphabetically after " << second << '\n';
}
