#include <iostream>
using namespace std;

class Person {
public:
    void walk() {
        cout << "Person is walking" << endl;
    }
};

class Employee {
public:
    void work() {
        cout << "Employee is working" << endl;
    }
};

class Student : public Person {
public:
    void study() {
        cout << "Student is studying" << endl;
    }
};

class WorkingStudent : public Student, public Employee {
public:
    void balance() {
        cout << "Working student is balancing work and study" << endl;
    }
};

int main() {
    cout << "Hybrid Inheritance Example:" << endl;
    WorkingStudent ws;
    ws.walk();    // From Person via Student
    ws.study();   // From Student
    ws.work();    // From Employee
    ws.balance(); // Own method
    
    return 0;
}