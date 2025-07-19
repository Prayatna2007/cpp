#include <iostream>
using namespace std;

class Fib {
    int a, b;  // Stores last two Fibonacci numbers
public:
    Fib() { a = 0; b = 1; }  // Start with 0, 1
    
    // Overload ++ operator to generate next number
    void operator++() {
        int next = a + b;
        a = b;
        b = next;
    }
    
    void show() {
        cout << "Next Fibonacci number: " << a << endl;
    }
};

int main() {
    Fib f;
    
    f.show();  // Shows 1 (first number)
    
    ++f;       // Generates next number
    f.show();  // Shows 1
    
    ++f;
    f.show();  // Shows 2
    
    ++f;
    f.show();  // Shows 3
    
    ++f;
    f.show();

    ++f;
    f.show();

    ++f;
    f.show();

    return 0;
}