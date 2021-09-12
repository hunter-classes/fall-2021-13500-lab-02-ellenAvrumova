/**
 * Author: Ellen Avrumova
 * Course: CSCI-135
 * Instructor: Tong Yi & Mike Zamansky
 * Assignment: Lab 2C
 * 
 * This program creates an array with 10 integers and allows the user to choose an index and
 * change the value of the integer at that index in the array.
 */

#include <iostream>

int main() {
    int myData[10];
    for(int i = 0; i < 10; i++) {
        myData[i] = 1;
        std::cout << myData[i] << " "; 
    }
    std::cout << std::endl;

    int index;
    int value;
    do {
        std::cout << "Input index: ";
        std::cin >> index;
        std::cout << "Input value: ";
        std::cin >> value;
        if(index >= 0 && index < 10) {
            myData[index] = value;
            for(int i = 0; i < 10; i++) {
                std::cout << myData[i] << " ";
            }
        }
        else {
            std::cout << "Index out of range. Exit." << std::endl;
        }
        std::cout << std::endl;
    } while(index >= 0 && index < 10);

    return 0;
}