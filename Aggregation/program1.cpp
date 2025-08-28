#include <iostream>
using namespace std;

// Class Student
class Student {
    string name;
    int roll;
public:
    Student(string n, int r) : name(n), roll(r) {}
    void display() {
        cout << "Student Name: " << name << ", Roll: " << roll << endl;
    }
};

// Class Department HAS-A Student (Aggregation)
class Department {
    string deptName;
    Student &student;   // reference to Student (aggregation)
public:
    Department(string d, Student &s) : deptName(d), student(s) {}
    void showDept() {
        cout << "Department: " << deptName << endl;
        student.display();   // using Student inside Department
    }
};

int main() {
    // Create Student independently
    Student s1("Prayatna", 101);

    // Aggregation: Department uses Student
    Department d1("Computer Science", s1);

    d1.showDept();

    return 0;
}
