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
    string previous = " "; // previous word; initialized to "not a word"
    string current; // current word
    while (cin >> current) { // read a stream of words
        if (previous == current) // check if the word is the same as last
            cout << "repeated word: " << current << '\n';
        previous = current;
    }
}
