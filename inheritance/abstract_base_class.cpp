#include<iostream>
using namespace std;
class shape
{
    public:
    int l,b,h;
    void setdata()
    {
        l=5;
        b=4;
        h=3;
    }
    virtual void calcarea()=0; //pure virtual function and if a class contains pure virtual fn then the class is Abstract Base Class(ABC)
    //virtual void calcarea(0){} -> Virtual function
};

class rectangle: public shape
{   
    public:
    void calcarea()
    {
        cout<<" Area of Rectangle = "<<l*b<<endl;
    }
};

class triangle: public shape
{   
    public:
    void calcarea()
    {
        cout<<" Area of triangle = "<<float((b*h)/2)<<endl;
    }
};
int main()
{
    rectangle r1;
    r1.setdata();
    r1.calcarea();
    triangle t1;
    t1.setdata();
    t1.calcarea();
    return 0;
}