// "Operator Overloading in C++: Implementing the Assignment (=) Operator"
#include<iostream>
using namespace std;
class time
{ 
    int hour,minutes;
    public:
    void setdata()
    {   
        cout<<"Enter hours and Minutes :- "<<endl;
        cin>>hour>>minutes; 
    }
    void operator = (time tm1)
    {   
        hour=tm1.hour;
        minutes=tm1.minutes;
    }
    bool operator == (time tm)
    {
        int total1=hour * 60 + minutes;
        int total2=tm.hour * 60 +minutes;
        if(total1==total2)
            return 1;
        else
            return 0;
    }
}t1,t2;
int main()
{   
    t1.setdata();
    t2=t1;
    if(t2==t1)
        cout<<"Time t1 and t2 is equal...";
    else    
        cout<<"Time t1 and t2 is not equal...";
        
    return 0;
}