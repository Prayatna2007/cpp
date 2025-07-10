#include <iostream>
using namespace std;

class Shape {
public:
    void display() {
        cout << "This is a shape" << endl;
    }
};

class Circle : public Shape {
public:
    void drawCircle() {
        cout << "Drawing circle" << endl;
    }
};

class Square : public Shape {
public:
    void drawSquare() {
        cout << "Drawing square" << endl;
    }
};

int main() {
    cout << "Hierarchical Inheritance Example:" << endl;
    Circle c;
    Square s;
    
    c.display();    // Inherited from Shape
    c.drawCircle(); // Own method
    
    s.display();    // Inherited from Shape
    s.drawSquare(); // Own method
    
    return 0;
}