// Nameless Argument

#include<iostream>
using namespace std;
class student
{
    private:
    int roll;
    string name;
    public:
    student()
    {
        roll=01;
        name="Cristiano Ronaldo";
    }
    void display()
    {
        cout<<endl;
        cout<<"Roll = "<<roll<<endl;
        cout<<"Name = "<<name<<endl;
        cout<<endl;
    }
    student operator ++()
    {
        ++roll;
        return student(roll,name);
    }
    student(int r,string n)
    {
        roll = r;
        name=n;
    }
};
int main()
{
    student b1,b2;
    b1.display();
    b2=++b1; 
    //b1.display();
    b2.display();
    return 0;
}