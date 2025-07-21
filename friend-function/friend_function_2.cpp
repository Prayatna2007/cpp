#include<iostream>
#include<string>  
using namespace std;

class person;  
class student
{
    int roll;
    string name;
public:
    student(int roll, string name)
    {
        this->roll = roll;
        this->name = name;
    }
    friend void display(student, person); 
};

class person
{
    string ssn, add;
public:
    person()
    {
        ssn = "23-42-52";
        add = "Libali";
    }
    friend void display(student, person); 
};

void display(student s1, person p1)
{
    cout << "Roll: " << s1.roll <<endl<< "Name: " << s1.name << endl;
    cout << "SSN: " << p1.ssn << endl<< "Address: " << p1.add << endl; 
}

int main()
{   
    student s1(20, "Ronaldo");
    person p1;
    display(s1, p1);  
    return 0;
}