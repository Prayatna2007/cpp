// "Operator Overloading in C++: Implementing the Comparison (>) Operator"


#include<iostream>
using namespace std;
int i=1;
class time
{ 
    int hour,minutes;
    public:
    void setdata()
    {   
        cout<<"Enter hours and Minutes for "<<i<<" :- "<<endl;
        cin>>hour>>minutes; 
        ++i;
    }
    int operator > (time tm)
    {
        int total1=hour * 60 + minutes;
        int total2=tm.hour * 60 +minutes;
        if(total1>total2)
            return 1;
        else if(total1==total2)
            return 0;
        else
            return -1;
    }
}t1,t2;
int main()
{   
    t1.setdata();
    t2.setdata();

    int r=t1>t2;
    if(r==1)
        cout<<"Time t1 is greater...";
    else if(r==0)
        cout<<"Both the values of time are equal";
    else    
        cout<<"Time t2 is greater...";
        
    return 0;
}