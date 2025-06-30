#include <iostream>
using namespace std;

class Base {
public:
    Base() { cout << "Base Constructor\n"; }
    ~Base() { cout << "Base Destructor\n"; }
};

class Derived {
private:
    Base base;  // Composition instead of inheritance

public:
    Derived() : base() {  // Explicitly construct the Base member
        cout << "Derived Constructor\n";
    }
    
    ~Derived() {
        cout << "Derived Destructor\n";
        // Base destructor will be called automatically after this
    }
};

int main() {
    cout << "Creating Derived object:\n";
    Derived d;
    cout << "\nDestroying Derived object:\n";
    return 0;
}