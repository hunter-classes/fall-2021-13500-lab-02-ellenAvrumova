/**
 * Author: Ellen Avrumova
 * Course: CSCI-135
 * Instructor: Tong Yi & Mike Zamansky
 * Assignment: Lab 2D
 * 
 * This program prints the fibonacci sequence from 0 to 59.
 * What is happening when the numbers approach two billions?
 * Describe what you observe and explain why it is happening in a program comment.
 * When the numbers approach the two billions, the numbers become negative.
 * Then the sequence continues to switch between negative and positive numbers.
 * This occurs because ints can't hold an infinite amount. The highest number
 * an integer can be is 2,147,483,647 and the lowest is -2,147,483,647.
 * When an integer overflows, it wraps back around to the opposite sign.
 */

#include <iostream>
int main () {
    int fib[60];

    fib[0] = 0;
    fib[1] = 1;
    std::cout << fib[0] << std::endl;
    std::cout << fib[1] << std::endl;

    for(int i = 2; i < 60; i++) {
        fib[i] = fib[i-1] + fib[i-2];
        std::cout << fib[i] << std::endl;
    }

    return 0;
}
