#include <iostream>
using namespace std;

class Calculator {
public:
    // Compile-time polymorphism (function overloading)
    int add(int a, int b) {
        return a + b;
    }
    
    double add(double a, double b) {
        return a + b;
    }
};

int main() {
    Calculator calc;
    
    cout << calc.add(2, 3) << endl;      // Calls int version (Output: 5)
    cout << calc.add(2.5, 3.7) << endl;  // Calls double version (Output: 6.2)
    
    return 0;
}