// Operator Overloading
#include<iostream>
using namespace std;
class apple
{
    public:
    int a;

    apple()
    {
        a=10;
    }

    void display()
    {
        cout<<"A="<<a<<endl;
    }
    //Operator Function
    void operator ++ ()
    {
        a++;
    }

}m1;
int main()
{   
    apple m1;
    m1.display();
    ++m1;
    m1.display();
    return 0;
}
