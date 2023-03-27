#include <iostream>
#include "myfunctions.hpp"

int main() {
    double x = 2.0;
    std::cout << "The square (A) of " << x << " is " << square_A(x) << std::endl;
    std::cout << "The square (B) of " << x << " is " << square_B(x) << std::endl;
    std::cout << "The square (C) of " << x << " is " << square_C(x) << std::endl;
    std::cout << "The square (D) of " << x << " is " << square_D(x) << std::endl;    
    return 0;
}
