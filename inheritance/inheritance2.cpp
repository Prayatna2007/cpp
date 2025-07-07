#include <iostream>
#include <string>
using namespace std;

// Base class
class Person {
protected:
    string name;
    int age;

public:
    void setPersonData(string n, int a) {
        name = n;
        age = a;
    }

    void displayPerson() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

// Derived class (inherits from Person)
class Student : public Person {
private:
    int rollNo;

public:
    void setStudentData(string n, int a, int r) {
        setPersonData(n, a); // Reusing base class method
        rollNo = r;
    }

    void displayStudent() {
        displayPerson(); // Reusing base class method
        cout << "Roll No: " << rollNo << endl;
    }
};

int main() {
    Student s1;
    s1.setStudentData("Alice", 20, 101);
    s1.displayStudent();

    return 0;
}