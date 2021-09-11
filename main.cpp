/**
 * Author: Ellen Avrumova
 * Course: CSCI-135
 * Instructor: Tong Yi & Mike Zamansky
 * Assignment: Lab 2B
 * 
 * This program using a function that accepts two integers and prints out all the numbers
 * in the range between L to U with L being inclusive and U being excluded.
 */

#include <iostream>
#include "funcs.h"

int main() {
    print_interval(-5,10);
    print_interval(12,28);
    print_interval(3,4);
    print_interval(-10,-2);

    return 0;
}