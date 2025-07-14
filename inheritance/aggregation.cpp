#include<iostream>
using namespace std;
class Book{
    int id;
    string author;
    public:
        void setdata()
        {
            cout<<"Enter ID and Author of Book:";
            cin>>id>>author;
        }
        void display()
        {
            cout<<"ID : "<<id<<"||||||| Author : "<<author<<endl;
        }
};
class Library{
    string address, name;
    Book b1;
    public:
    void setdata()
    {
        cout<<"Enter Address and Name of Library:";
        cin>>address>>name;
        b1.setdata();
    }
    void display()
    {
        cout<<"Address : "<<address<<"||||||| Name : "<<name<<endl;
        b1.display();
    }

};
int main()
{   
    Library l1;
    l1.setdata();
    l1.display();
    return 0;
}
