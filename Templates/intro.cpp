#include<iostream>
using namespace std;

//Template
template <class T, class U>
U find_max(T a,U b)
{
    if(a>b)
        return a;
    else
        return b;
}
int main()
{   
    cout<<"Larger Num is : "<<find_max("23","45")<<endl;
    cout<<"Larger Num is : "<<find_max(23.1,45.67)<<endl;
    cout<<"Larger Num is : "<<find_max("a","b")<<endl;
    cout<<"Larger Num is : "<<find_max(23,90.7)<<endl;
    return 0;
}