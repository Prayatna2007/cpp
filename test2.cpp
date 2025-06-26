#include<iostream>
using namespace std;
int b=7;
int main()
{   
    int a;
    int *p;
    cout<<"Enter the value of a: ";
    cin>>a;
    p=&a;
    cout<<"a = "<<a<<endl;
    cout<<"&a = "<<&a<<endl;
    cout<<"&p = "<<&p<<endl;
    cout<<"p = "<<p<<endl;
    cout<<"*p = "<<*p;

    return 0;
}
