#include <iostream>
using namespace std;

// Inline function for addition
inline int add(int a, int b) {
    return a + b;
}

// Function with default arguments
int subtract(int a, int b = 10) {
    return a - b;
}

// Function overloading for multiplication
int multiply(int a, int b) {
    return a * b;
}

double multiply(double a, double b) {
    return a * b;
}

int main() {
    // Inline function
    cout << "Addition: " << add(10, 5) << endl;

    // Default arguments
    cout << "Subtraction with default value: "
         << subtract(20) << endl;

    cout << "Subtraction with given value: "
         << subtract(20, 5) << endl;

    // Function overloading
    cout << "Multiplication of integers: "
         << multiply(4, 5) << endl;

    cout << "Multiplication of decimal numbers: "
         << multiply(2.5, 4.0) << endl;

    return 0;
}