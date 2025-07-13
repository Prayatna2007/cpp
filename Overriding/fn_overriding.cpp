// Function Overriding -> two function having same name and same argument signature but in a different class is function overloading
#include<iostream>
using namespace std;

class Base
{   
    int a,b;
    public:
    void setdata()
    {   
        cout<<"Enter values for a and b: "<<endl;
        cin>>a>>b;
    }
    void display()
    {
        cout<<"A: "<<a<<"  B: "<<b<<endl;
    }
};

class Derived: public Base
{
    int c;
    public:
    void setdata() //overridden fn
    {
        cout<<"Enter the value of c: "<<endl;
        cin>>c;
    }
    void display() //overridden fn
    {
        cout<<"C: "<<c<<endl;
    }
};


int main()
{
    Derived d1;
    d1.setdata();
    d1.display();
    //derived_class_object.base_class_name::overridden_fn -> syntax to class overridden fn from derived class to base class
    d1.Base::setdata();
    d1.Base::display();
    return 0;

}