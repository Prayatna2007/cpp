#include<iostream>
using namespace std;

class person
{
    string name;
    int ssn, age;
public:
    void setdata(string n, int sn, int a)
    {
        name = n;
        ssn = sn;
        age = a;
    }
    void display()
    {
        cout << "SSN: " << ssn << "  Name: " << name << "  Age: " << age << endl;
    }
};

class student : public person
{
    int reg_no;
public:
    void setRegNo(int reg)
    {
        reg_no = reg;
    }
    void displayStudent()
    {
        display(); 
        cout << "Reg No: " << reg_no << endl;
    }
};

int main()
{   
    student s1;
    s1.setdata("John", 123, 20); // Inherited from person
    s1.setRegNo(1001);           // Specific to student
    s1.displayStudent();          // Displays both person and student details

    return 0;
}