#include<iostream>
using namespace std;

class Prayatna{
    int number;
    string position,foot;
    public:
    Prayatna(int number=11, string position="Attacking Mid Fielder",string foot="Right")
    {
        this->number = number;
        this->position = position;
        this->foot = foot;
    }
    friend void operator >>(istream &in, Prayatna &m2);
    friend void operator <<(ostream &out, Prayatna &m2);
};
void operator >>(istream &in, Prayatna &m2)
{
    cout<<"Enter Number: "<<endl;
    in>>m2.number;
    cout<<"Enter Position: "<<endl;
    in>>m2.position;
    cout<<"Enter Foot: "<<endl;
    in>>m2.foot;
}

void operator <<(ostream &out, Prayatna &m2)
{   out<<"-------------------------"<<endl;
    out<<"Number: "<<m2.number<<endl<<"Position: "<<m2.position<<endl<<"Foot: "<<m2.foot<<endl;
}

int main()
{
    Prayatna m1;
    cin>>m1;
    cout<<m1;
    return 0;
}