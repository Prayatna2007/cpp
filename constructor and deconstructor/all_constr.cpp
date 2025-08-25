#include <iostream>
using namespace std;

class Student {
    int id;
    string name;

public:
    // Default Constructor
    Student() {
        id = 0;
        name = "Unknown";
        cout << "Default Constructor called" << endl;
    }

    // Parameterized Constructor
    Student(int i, string n) {
        id = i;
        name = n;
        cout << "Parameterized Constructor called" << endl;
    }

    // User-defined Copy Constructor
    Student(const Student &s) {
        id = s.id;
        name = s.name;
        cout << "User-defined Copy Constructor called" << endl;
    }

    // Display function
    void display() {
        cout << "ID: " << id << ", Name: " << name << endl;
    }

    // Destructor
    ~Student() {
        cout << "Destructor called for " << name << endl;
    }
};

int main() {
    // Default constructor
    Student s1;
    s1.display();

    // Parameterized constructor
    Student s2(101, "Alice");
    s2.display();

    // User-defined Copy Constructor
    Student s3(s2);
    s3.display();

    // Default Copy Constructor (compiler-provided)
    Student s4 = s2;   // Calls compiler-generated copy constructor
    s4.display();

    return 0;
}
