#include<iostream>
using namespace std;

template <class T>
class demo
{
    T a, b;
    public:
    demo(T a,T b)
    {
        this->a = a;
        this->b = b;
    }
    T getmax()
    {
        return (a>b)?a:b;
    }
};
int main()
{   
    demo <int> d1(4,5);
    cout<<"Larger is : "<<d1.getmax()<<endl;
    return 0;
}
