#include <iostream>
#include <string>
using namespace std;

class Cat {
private:
    string breed;
    string color;
    float weight;

public:
    Cat() {
        breed = "Husky";
        color = "Brown";
        weight = 3.5;
    }

    void setdetails(string b, string c, float w) {
        breed = b;
        color = c;
        weight = w;
    }

    void display() {
        cout << "Breed: " << breed << endl;
        cout << "Color: " << color << endl;
        cout << "Weight: " << weight << " kg" << endl;
    }
};

int main() {
    Cat c1;
    cout << "Default values of c1:" << endl;
    c1.display();

    string breed, color;
    float weight;

    cout << "\nEnter breed: ";
    getline(cin, breed);
    cout << "Enter color: ";
    getline(cin, color);
    cout << "Enter weight: ";
    cin >> weight;

    Cat c2;
    c2.setdetails(breed, color, weight);
    cout << "\nUser provided values of c2:" << endl;
    c2.display();

    return 0;
}