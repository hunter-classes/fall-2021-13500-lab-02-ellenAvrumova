#include <iostream>

void print_interval(int L, int U) {
    std::cout << "Please enter L: " << L;
    std::cout << "Please enter U: " << U;
    
    while(L < U) {
        std::cout << L << " ";
        L++;
    }
    
}