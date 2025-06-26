// passing objects as function arguments

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
        void for_r3(rect rl1, rect rl2)
        {
            l=rl1.l+rl2.l;
            b=rl1.b+rl2.b;
        }
}r1,r2,r3;
int main()
{
    r1.set_data(10,5);
    r1.display();
    r2.set_data(20,10);
    r2.display();
    r3.for_r3(r1,r2);
    r3.display();
    return 0;
}