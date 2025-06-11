#include<iostream>
using namespace std;
class cat{
    private:
    string breed,color;
    float weight;

    public:
    void setdetails(string b,string c, float w)
    {
        breed= b;
        color= c;
        weight = w;
        
    }
    void display()
    {   
        cout<<"The breed of the cat is "<<breed<<"."<<endl;
        cout<<"The color of the cat is "<<color<<"."<<endl;
        cout<<"The weight of the cat is "<<weight<<" kg."<<endl;
    }
}c1;
int main()
{   
    string x,y;
    float z;
    x="British Shorthair";
    y="Ash Gray";
    z=8.42;
    c1.setdetails(x,y,z);
    c1.display();
    return 0;
} 