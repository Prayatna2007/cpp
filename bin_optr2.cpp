#include<iostream>
#include<iomanip>
using namespace std;
class weight
{
    int kg, gram;
    public:
    void display()
    {
        cout<<"Kilogram: "<<setw(5)<<kg<<endl;
        cout<<"Gram: "<<setw(9)<<gram<<endl;
        cout<<endl;
    }

    //default constructor
    weight()
    {}
    //paramaterized constructor
    weight(int k ,int g)
    {   
        kg = k;
        gram = g;
    }
    weight operator *(weight s5)
    {   
        weight s4;
        s4.kg=kg*s5.kg;
        s4.gram=gram*s5.gram;
        return s4;
    }
       
};
int main()
{
    weight s1(2,40),s2(10,50),s3;
    s1.display();
    s2.display();
    s3=s1*s2;
    s3.display();
    return 0;
}