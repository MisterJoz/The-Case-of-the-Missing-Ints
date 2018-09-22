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
    data[0] = data[0] + static_cast<long long>(i); //sum
    data[1] = data[1] + (static_cast<long long>(i) * static_cast<long long>(i)); //sum of squares
    
}

// If every number between 1 and 1000000 except one have
// been told, and no number has been told more than once,
// sets x equal to the one number not yet told.
//
// Otherwise has undefined behavior.
//
// Must run in O(1) time.
void Oracle::missing_one(int &x){
    long long sum_of_range, sum_of_array, missing_number, n;
    
    //determine range and store in n
    n = 1000000;
    //use Theorem 1.1 to compute the sum of the range and store in sum_of_range
    sum_of_range = (((n)*(n+1))/2);
    //sum up elements in array and store in sumOfArray (main.cpp does this and stores in data[0])
    sum_of_array = data[0];
    //the missing number is the sum of range - sum of elements in array
    missing_number = sum_of_range - sum_of_array;
    
    x = missing_number;
    
}

// If every number between 1 and 1000000 except two have
// been told, and no number has been told more than once,
// sets x and y equal to the two numbers not yet told (where x < y).
//
// Otherwise has undefined behavior.
//
// Must run in O(1) time.
void Oracle::missing_two(int &x, int &y){
    
    long long n, s, t, sr, quadratic;
    
    
    n = 1000000;
    //sum from 1 to n minus the sum calulcated in main by tell()
    s = ((n * (n + 1))/2) - data[0];
    //sum of squares from 1 to n - sum of squares calculated in main by tell()
    t = (((n * (n + 1)) * (2 * n + 1))/6) - data[1];
    //sqrt(b^2 - 4(a)(c))
    sr = sqrt((4 * s * s) - (4 * 2 * ((s * s)-t)));
    quadratic = (2 * s - sr)/(2 * 2);
    
    x = quadratic;
    y = s - x;
    
    
    
}









