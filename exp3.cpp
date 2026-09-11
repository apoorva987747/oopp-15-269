#include <iostream>
using namespace std;
inline int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b = 10) {
    return a - b;
}
int multiply(int a, int b) {
    return a * b;
}

double multiply(double a, double b) {
    return a * b;
}

int main() {
    
    cout << "Addition: " << add(10, 5) << endl;

    cout << "Subtraction with default value: "
         << subtract(20) << endl;

    cout << "Subtraction with given value: "
         << subtract(20, 5) << endl;

   
    cout << "Multiplication of integers: "
         << multiply(4, 5) << endl;

    cout << "Multiplication of decimal numbers: "
         << multiply(2.5, 4.0) << endl;

    return 0;

}