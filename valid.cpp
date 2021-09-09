/**
 * Author: Ellen Avrumova
 * Course: CSCI-135
 * Instructor: Tong Yi & Mike Zamansky
 * Assignment: Lab 2A
 * 
 * This program asks the user to input a number.
 * If the number is not between 0 and 100, the program will ask the user to re-enter a number
 * until it's between that range. Once it's in the range, the number squared is printed.
 */

#include <iostream>

int main() {
    int num;
    std::cout << "Please enter an integer:" << std::endl;
    std::cin >> num;
    while(num <= 0 || num >= 100) {
        std::cout << "Please re-enter:" << std::endl;
        std::cin >> num;
    }
    if(num > 0 && num < 100) {
        std::cout << num*num << std::endl;
    }
    return 0;
}