//Friend Class Example

#include<iostream>
using namespace std;
class person;
class student
{
    int roll;
    string name;
    public:
    student(int roll,string name)
    {
        this->roll=roll;
        this->name=name;
    }
    friend class person;
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
    void display(student s1)
    {
        cout << "SSN: " << ssn << endl<< "Address: " << add << endl; 
        cout<< "Roll: " <<s1.roll << endl << "Name: "<<s1.name <<endl;
    }
};
int main()
{   
    student s1(20,"Ronaldo");
    person p1;
    p1.display(s1);
    return 0;
}