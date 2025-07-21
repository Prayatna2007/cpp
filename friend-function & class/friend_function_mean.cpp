#include<iostream>
using namespace std;
class Num2;
class Num1
{
    int a,b;
    public:
    void setdata(int ar, int br)
    {
        a=ar;
        b=br;
    }
    friend void mean(Num1 n1, Num2 n2);
};
class Num2
{
    int c,d;
    public:
    void setdata(int cr, int dr)
    {
        c=cr;
        d=dr;
    }
    friend void mean(Num1 n1, Num2 n2);  
};
void mean(Num1 n1,Num2 n2)
{
    cout<<"The mean is : "<<(n1.a+n1.b+n2.c+n2.d)/4.0<<endl;
}
int main()
{
    Num1 n1;
    n1.setdata(2,3);
    Num2 n2;
    n2.setdata(4,5);
    mean(n1,n2);
    return 0;
}
