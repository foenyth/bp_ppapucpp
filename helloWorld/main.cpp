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
    int number_of_words = 0;
    string previous = " "; // not a word
    string current;
    while (cin >> current) {
        ++number_of_words; // increase word count
        if (previous == current)
            cout << "word number " << number_of_words << " repeated: " << current << '\n';
        previous = current;
    }
}
