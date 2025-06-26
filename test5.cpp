#include<iostream>
using namespace std;
class book{
    private:
    string name;
    int price;

    public:
    void getdata(int r, string n)
    {
        price=r;
        name=n;
        
    }
    void show_data()
    {
        cout<<"Price of book is "<<price<<endl;
        cout<<"Name of book is "<<name<<endl;
    }
}b1; 
int main()
{   
    b1.getdata(4650,"Einstein");
    b1.show_data();
    return 0;
}