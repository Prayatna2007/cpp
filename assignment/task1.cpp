#include<iostream>
using namespace std;
class rectangle
{
    public:
    float length,breadth;
    void calc_area(float l, float b)
    {
        cout<<"Area :- "<<l*b<<endl;
    }
}r1;
int main()
{   
    r1.length=17;
    r1.breadth=4;
    r1.calc_area(r1.length,r1.breadth);
    return 0;
}