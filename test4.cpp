#include<iostream>
using namespace std;
class book{
    private:
    string name,author;
    int price;

    public:
    void getdata(string n,string s, int p)
    {
        name= n;
        author= s;
        price = p;
        
    }
    void show_data()
    {   
        cout<<"Name of book is "<<name<<endl;
        cout<<"Name of author is "<<author<<endl;
        cout<<"Price of book is "<<price<<endl;
    }
}b1; 
int main()
{   
    int pri;
    string na,au;
    cout<<"Enter the price , name and author name of book.";
    cin>>pri>>na>>au;
    b1.getdata(na,au,pri);
    b1.show_data();

    return 0;
}