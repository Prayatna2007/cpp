#include <iostream>
using namespace std;

class A {
public:
    void display() { cout << "Display from A\n"; }
};

class B {
public:
    void display() { cout << "Display from B\n"; }
};

class C : public A, public B {};

int main() {
    // C obj;
    // obj.display();   //  Error: Ambiguous (A::display or B::display?)
    C obj;
    obj.A::display();   // ✅ Calls A’s display
    obj.B::display();   // ✅ Calls B’s display
    return 0;
}
