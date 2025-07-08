#include<iostream>
using namespace std;
class Person
{   
    string name, address;
    int SSID;
    public:
        void setdata(string n, string a, int s)
        {
            name=n;
            address=a;
            SSID=s;
        }
        void display()
        {
            cout<<"SSID : "<<SSID<<endl;
            cout<<"Name : "<<name<<endl;
            cout<<"Address: "<<address<<endl;
        }
};

class Faculty : public Person
{   
    string faculty;
    public:
        void set_data(string n, string a, int s, string f)
        {
            setdata(n,a,s);
            faculty=f;
        }
        void display1()
        {
            display();
            cout<<"Faculty: "<<faculty<<endl;
        }
};

int main()
{
    Faculty f1;
    f1.set_data("Kushal", "Kamalbinayak", 101, "B.Sc.CSIT");
    f1.display1();
    return 0;
}