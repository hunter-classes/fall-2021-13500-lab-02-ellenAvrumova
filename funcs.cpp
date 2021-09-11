/**
 * Author: Ellen Avrumova
 * Course: CSCI-135
 * Instructor: Tong Yi & Mike Zamansky
 * Assignment: Lab 2B
 * 
 * This program is the function that main.cpp uses. It accepts two integers and prints out all the numbers
 * in the range between L to U with L being inclusive and U being excluded.
 */

#include <iostream>
#include "funcs.h"

void print_interval(int L, int U) {
    std::cout << "Please enter L: " << L << std::endl;
    std::cout << "Please enter U: " << U << std::endl;
    
    while(L < U) {
        std::cout << L << " ";
        L++;
    }
    std::cout << std::endl;
    
}