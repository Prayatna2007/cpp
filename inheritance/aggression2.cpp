#include<iostream>
using namespace std;
class Student{
    int roll;
    string name;
    public:
    void setdata()
    {
        cout<<"Enter roll and name of student: "<<endl;
        cin>>roll>>name;
    }
    void display()
    {
        cout<<"Roll : "<< roll <<" |.        .| "<< "Name : "<<name;
    }
};
class Course
{
    string faculty;
    Student s1;
    public:
    void setdata()
    {
        cout<<" Enter Faculty: "<<endl;
        cin>>faculty;
        s1.setdata();
    }
    void display()
    {
        cout<<"Faculty: "<<faculty<<endl;
        s1.display();
    }
};
int main()
{
    Course c1;
    c1.setdata();
    c1.display();
    return 0;
}