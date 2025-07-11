#include<iostream>
using namespace std;
class celcius
{
    float temp;
    public:
    celcius()
    {
        temp = 0;
    }
    celcius(float t)
    {
        temp = t;
    }
    void display()
    {
        cout<<"The temperature in Celcius is : "<<temp<<endl;
    }
    int gettemp()
    {
        return temp;
    }
};
class fahrenheit
{
    float temp1;
    public:
    fahrenheit()
    {
        temp1 = 0;
    }
    fahrenheit(float t)
    {
        temp1 = t;
    }
    void display()
    {
        cout<<"The temperature in Celcius is : "<<temp1<<endl;
    }
    fahrenheit(celcius s1)
    {
        temp1=((9*s1.gettemp())/5)+32;
    }

};
int main()
{
    celcius c1(180);
    fahrenheit f1;
    f1=c1;
    c1.display();
    f1.display();
    return 0;
}