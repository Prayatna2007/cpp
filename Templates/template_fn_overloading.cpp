#include <iostream>
using namespace std;

// Function template for two parameters of the same type
template <typename T>
T add(T a, T b) {
    cout << "Template for same types called" << endl;
    return a + b;
}

// Overloaded function template for two different types
template <typename T, typename U>
double add(T a, U b) {
    cout << "Template for different types called" << endl;
    return a + b;
}

// Normal function (non-template) overload
int add(int a, int b) {
    cout << "Non-template function called" << endl;
    return a + b;
}

int main() {
    int x = 10, y = 20;
    double p = 5.5, q = 4.5;

    cout << add(x, y) << endl;        // Calls **non-template function**
    cout << add(p, q) << endl;        // Calls **template for same types**
    cout << add(x, q) << endl;        // Calls **template for different types**

    return 0;
}
