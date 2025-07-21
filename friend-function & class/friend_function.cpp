#include<iostream>
using namespace std;
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
    friend void display(student);
};
void display(student s1)
    {
        cout<<"Roll : "<<s1.roll<<endl<<"Name : "<<s1.name<<endl;
    }
int main()
{   
    student s1(20,"Ronaldo");
    display(s1);
    return 0;
}