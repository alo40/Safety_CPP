#include <iostream>

int main() {
    int x = 42; // Declare an integer variable x and assign it the value 42
    int* p = &x; // Declare a pointer variable p and assign it the memory address of x

    std::cout << "The value of x is: " << x << std::endl; // Prints "The value of x is: 42"
    std::cout << "The value of p is: " << p << std::endl; // Prints the memory address of x
    std::cout << "The value that p points to is: " << *p << std::endl; // Prints the value of x

    *p = 99; // Change the value of x indirectly via the pointer p

    std::cout << "The value of x is now: " << x << std::endl; // Prints "The value of x is now: 99"

    return 0;
}