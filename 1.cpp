#include<iostream>
using namespace std;
class book{
    int price;
    string name;
    static int count;

    public:
    void setdata(int p,string na)
    {
        price=p;
        name=na;
        count++;
    }
    static void display()
    {   
        cout<<"Total Objects: " <<count<<endl;
        cout<<endl;
    }
    void dis()
    {   
        cout<<"Price: " <<price<<endl;
        cout<<"Name: " <<name<<endl;
    }

};
int book::count=0;
int main()
{   
    book b1;
    b1.setdata(18000,"Theory of Relativity");
    b1.dis();
    book::display();
    book b2;
    b2.setdata(11000,"Atomic Model");
    b2.dis();
    book::display();
    book b3;
    b3.setdata(24000,"Nuclear Theory");
    b3.dis();
    book::display();

    return 0;
}