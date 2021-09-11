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