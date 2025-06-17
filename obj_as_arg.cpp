// passing objects as function arguments

#include<iostream>
using namespace std;
class complex
{
    private:
        float real, imag;
     public:
        void set_data(float r, float i)
        {
            real=r;
            imag=i;
        }
        complex add( complex c4)
        {
        complex c3;
        c3.real=real+ c4.real;
        c3.imag=imag+ c4.imag;
        return c3;
        }
        void display()
        {
            cout<<"The sum is :"<<real<<" + "<<imag<<"i"<<endl;
        }
}c1,c2;
int main()
{   
    c1.set_data(3,1);
    c2.set_data(1.2,3.4);
    complex c5= c1.add(c2);
    c5.display();
    return 0;
}


    