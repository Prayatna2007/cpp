#include<iostream>
using namespace std;
class Time{
    int hour,minute,second;
    public:
    Time(int hour=0,int minute=0,int second=0)
    {
        this->hour=hour;
        this->minute=minute;
        this->second=second;
    }
    friend void operator >>(istream &in, Time &t2);
    friend void operator <<(ostream &out, Time &t2);
};
void operator >>(istream &in, Time &t2)
{
    cout<<"Enter Hour: "<<endl;
    in>>t2.hour;
    cout<<"Enter Minute: "<<endl;
    in>>t2.minute;
    cout<<"Enter Second: "<<endl;
    in>>t2.second;
}

void operator <<(ostream &out, Time &t2)
{   out<<"-------------------------"<<endl;
    out<<"Hour: "<<t2.hour<<endl<<"Minute: "<<t2.minute<<endl<<"Second: "<<t2.second<<endl;
}
int main()
{   
    Time t1;
    cin>>t1;
    cout<<t1;
    return 0;
}