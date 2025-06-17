// Returning objects from a function

#include<iostream>
using namespace std;
class rect
{
    private:
        float l;
        float b;
    public:
        void set_data(float le,float br)
        {
            l=le;
            b=br;
        }
        void display()
        {
            cout<<"Length: "<<l<<endl;
            cout<<"Breadth: "<<b<<endl;
            cout<<"Area: "<<l*b<<endl;
            cout<<endl;
        }
        rect add(rect r5)
        {
            rect r8;
            r8.l = l + r5.l;
            r8.b = b + r5.b;
            return r8;
        }
}r1,r2,r3;
int main()
{
    r1.set_data(10,5);
    r1.display();

    r2.set_data(20,10);
    r2.display();

    rect r3 = r1.add(r2);
    r3.display();
    return 0;
}