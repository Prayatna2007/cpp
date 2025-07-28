#include<iostream>
#include<exception>
using namespace std;
int main()
{   
    int a,b;
    cout<<"Enter a and b: ";
    cin>>a>>b;
    try{
        if(b>0 && a>0)
            cout<<"The sum is : "<<a+b<<endl;
            
        else    
            throw out_of_range("Number is negative.");
    }
    catch(const out_of_range& g)
    {
        cout<<g.what();
    }
    return 0;
}