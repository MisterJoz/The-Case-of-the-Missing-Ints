//
//  oracle.cpp
//  Missing_Ints
//
//  Created by Joshua Garza on 9/18/18.
//  Copyright © 2018 Joshua Garza. All rights reserved.
//

#include "oracle.h"

// Creates a new oracle, ready to be told all numbers
// (in any order) from 1 to 1000000, except for one or two.
//
// Must run in O(1) time.
Oracle::Oracle(){
    data[0] = 0;
    data[1] = 0;
}

// Tells the oracle a number between 1 and 1000000 not yet told.
//
// Must run in O(1) time.
void Oracle::tell(int i){
    data[0] = i;
    
}

// If every number between 1 and 1000000 except one have
// been told, and no number has been told more than once,
// sets x equal to the one number not yet told.
//
// Otherwise has undefined behavior.
//
// Must run in O(1) time.
void Oracle::missing_one(int &x){
    long long int y, n, x1, sumFrom1toN;
    n = 1000000;
    x1 = data[0];
    
    sumFrom1toN = ((n * (n + 1))/2);
    y = sumFrom1toN - data[0];

    x = y;
    
    
}

// If every number between 1 and 1000000 except two have
// been told, and no number has been told more than once,
// sets x and y equal to the two numbers not yet told (where x < y).
//
// Otherwise has undefined behavior.
//
// Must run in O(1) time.
void Oracle::missing_two(int &x, int &y){
    
}
