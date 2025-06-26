#include<iostream>
#include<iomanip>
using namespace std;
class Dhewa
{
    int ruppee, paisa;
    public:
    void display()
    {
        cout<<"Rupee: "<<setw(5)<<ruppee<<endl;
        cout<<"Paisa: "<<setw(6)<<paisa<<endl;
        cout<<endl;
    }

    //default constructor
    Dhewa()
    {}
    //paramaterized constructor
    Dhewa(int r ,int p)
    {   
        ruppee = r;
        paisa = p;
    }
    Dhewa operator -=(Dhewa s5)
    {   
        ruppee-=s5.ruppee;
        paisa-=s5.paisa;
    }      
};
int main()
{
    Dhewa s1(2,40),s2(10,50);
    s1.display();
    s2.display();
    s1-=s2;
    s1.display();
    return 0;
}