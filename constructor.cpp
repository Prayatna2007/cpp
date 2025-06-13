// Simple Program Using Defaut Constructor

#include<iostream>
using namespace std;
class student
{
    private:
        int roll,roll1;
        string name,name1;
    void display()
    {
        cout<<"----------------------------------------"<<endl;
        cout<<"Name:-"<<name<<"\n"<<"Roll:-"<<roll<<endl;
        cout<<"----------------------------------------"<<endl;
        cout<<"Name:-"<<name1<<"\n"<<"Roll:-"<<roll1<<endl;
    }
    public:
    student()
    {
        name = "Prayatna Shrestha";
        roll = 16;
        name1 = "Cristiano Ronaldo";
        roll1 = 7;
        
    }
    
    void show()
    {
        display();
    }

};
int main()
{      
    student s1;
    s1.show();
    return 0;
}