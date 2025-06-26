#include<iostream>
#include<iomanip>
using namespace std;
class samaya
{
    int hour, minutes;
    public:
    void display()
    {
        cout<<"Hour: "<<hour<<setw(2)<<"Minutes: "<<minutes<<endl;
    }

    //default constructor
    samaya()
    {}
    //paramaterized constructor
    samaya(int h ,int m)
    {   
        hour = h;
        minutes = m;
    }
    samaya operator +(samaya s5)
    {   
        samaya s4;
        s4.hour=hour+s5.hour;
        s4.minutes=minutes+s5.minutes;
        return s4;
    }
       
};
int main()
{
    samaya s1(2,40),s2(10,50),s3;
    s1.display();
    s2.display();
    s3=s1+s2;
    s3.display();
    return 0;
}