// Normal functions accessed with pointers vs virtual functions accessed with pointers

#include<iostream>
using namespace std;
class animal{
    public:
        virtual void sound()
        {
            cout<<"Animal has sound, Inside Animal"<<endl;
        }
};
class dog:public animal{
    public:
        void sound()
        {
            cout<<"I am dog, Bhowww"<<endl;
        }
};
class cat:public animal{
    public:
        void sound()
        {
            cout<<"I am cat, Meowww"<<endl;
        }
};
int main()
{
    animal *p;
    animal a1;
    dog d1;
    cat c1;
    p=&a1;
    p->sound();
    p=&d1;
    p->sound();
    p=&c1;
    p->sound();
    return 0;
}