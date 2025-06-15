#include <iostream>
using namespace std;

class Rectangle {
private:
    float length;
    float breadth;

public:
    Rectangle(float l, float b) : length(l), breadth(b) {}

    void calc_area() {
        float area = length * breadth;
        cout << "Area: " << area << endl;
    }
    
};

int main() {
    float l, b;
    cout << "Enter length: ";
    cin >> l;
    cout << "Enter breadth: ";
    cin >> b;

    Rectangle r1(l, b);
    r1.calc_area();

    return 0;
}