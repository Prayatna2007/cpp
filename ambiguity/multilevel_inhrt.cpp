#include <iostream>
using namespace std;

class A {
public:
    void show() { cout << "Show from A\n"; }
};

class B : public A {
public:
    void show() { cout << "Show from B\n"; }
};

class C : public B {
public:
    void show() { cout << "Show from C\n"; }
};

int main() {
    C obj;
    obj.show();      // Calls C::show() by default

    //  Ambiguity if we want to call A::show() or B::show()
    // How to solve? Use scope resolution!
    
    obj.B::show();   // Explicitly call B’s version
    obj.A::show();   // Explicitly call A’s version
}
