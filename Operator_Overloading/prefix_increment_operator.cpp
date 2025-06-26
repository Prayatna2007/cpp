// "Operator Overloading in C++: Implementing the Prefix Increment (++) Operator"

#include<iostream>
using namespace std;
class test
{
    private:
        int n;
    public:
        test()
        {
            n=10;
        }
        test (int n1)
        {
            n=n1;
        }
        void display()
        {
            cout<<n<<endl;
        }
        test operator ++()
        {
            ++n;
            return test(n);
        }
};
int main()
{   
    test t1,t2;
    t2 = ++t1;
    t1.display();
    t2.display();
    return 0;
}