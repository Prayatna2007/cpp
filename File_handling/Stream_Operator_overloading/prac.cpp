#include<iostream>
using namespace std;
class Prayatna{
    string name, surname;
    public:
    Prayatna(string name="Prayatna",string surname="Shrestha")
    {
        this->name=name;
        this->surname=surname;
    }  
    friend void operator >>(istream &in, Prayatna &p1);
    friend void operator <<(ostream &out, Prayatna &p1);
};
void operator >>(istream &in, Prayatna &p1){
    cout<<"Enter your name: ";
    in>>p1.name;
    cout<<"Enter your surname: ";
    in>>p1.surname;
}
void operator <<(ostream &out, Prayatna &p1){
    out<<"Name: "<<p1.name<<endl;
    out<<"Surname: "<<p1.surname<<endl;
}
int main()
{
    Prayatna p2;
    cin>>p2;
    cout<<p2;
    return 0;
}