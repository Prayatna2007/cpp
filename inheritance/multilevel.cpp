#include<iostream>
using namespace std;
class Person
{
    string name;
    public:
        void setdata(string n)
        {
            name = n;
        }
        void display()
        {
            cout<<"Name : "<<name<<endl;
        }
};

class Employee : public Person
{
    string profession;
    public:
        void setdata1(string n,string p)
        {
            setdata(n);
            profession = p;
        }
        void display1()
        {      
            display();
            cout<<"Profession : "<<profession<<endl;
        }
};

class Student : public Employee
{
    string field;
    public:
        void setdata2(string n,string p,string f)
        {
            setdata1(n,p);
            field = f;
        }
        void display2()
        {      
            display1();
            cout<<"Field : "<<field<<endl;
        }
};
int main()
{
    Student s1;
    cout<<endl;
    s1.setdata2("Prayatna","Data Analyst","Comp.Science");
    s1.display2();
    cout<<endl;
    return 0;
}