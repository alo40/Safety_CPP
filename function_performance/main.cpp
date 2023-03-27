#include <iostream>
#include <chrono>
#include "myfunctions.hpp"

using namespace std;

int main() {
    double x = 2.0;
    std::cout << "The square_A of " << x << " is " << square_A(x) << std::endl;
    std::cout << "The square_B of " << x << " is " << square_B(x) << std::endl;
    std::cout << "The square_C of " << x << " is " << square_C(x) << std::endl;
    std::cout << "The square_D of " << x << " is " << square_D(x) << std::endl;    
    
    int num = 10;

    // Measure performance of function with square_A keyword
    auto start_time_A = chrono::high_resolution_clock::now();
    for (int i = 0; i < 1000000; i++) {
         square_A(num);
    }
    auto end_time_A = chrono::high_resolution_clock::now();
    auto duration_A = chrono::duration_cast<chrono::microseconds>(end_time_A - start_time_A);
    cout << "Time taken by square_A function: " << duration_A.count() << " microseconds" << endl;

    // Measure performance of function with square_B keyword
    auto start_time_B = chrono::high_resolution_clock::now();
    for (int i = 0; i < 1000000; i++) {
         square_B(num);
    }
    auto end_time_B = chrono::high_resolution_clock::now();
    auto duration_B = chrono::duration_cast<chrono::microseconds>(end_time_B - start_time_B);
    cout << "Time taken by square_B function: " << duration_B.count() << " microseconds" << endl;

    // Measure performance of function with square_C keyword
    auto start_time_C = chrono::high_resolution_clock::now();
    for (int i = 0; i < 1000000; i++) {
         square_C(num);
    }
    auto end_time_C = chrono::high_resolution_clock::now();
    auto duration_C = chrono::duration_cast<chrono::microseconds>(end_time_C - start_time_C);
    cout << "Time taken by square_C function: " << duration_C.count() << " microseconds" << endl;

    // Measure performance of function with square_D keyword
    auto start_time_D = chrono::high_resolution_clock::now();
    for (int i = 0; i < 1000000; i++) {
         square_D(num);
    }
    auto end_time_D = chrono::high_resolution_clock::now();
    auto duration_D = chrono::duration_cast<chrono::microseconds>(end_time_D - start_time_D);
    cout << "Time taken by square_D function: " << duration_D.count() << " microseconds" << endl;
    
    return 0;
}
