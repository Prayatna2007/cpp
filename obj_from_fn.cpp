// Returning Objects from Function

#include<iostream>
using namespace std;
class apple
{
    private:
    int count;
    public:
    apple()
    {
        count=500;
    }
    void display()
    {
        cout<<"price="<<count<<endl;
    }
    apple operator --()
    {
        apple b3;
        --count;
        b3.count=count;
        return b3;
        
    }
};
int main()
{
    apple b1,b2;
    b1.display();
    b2=--b1; 
    b2.display();
    return 0;
}