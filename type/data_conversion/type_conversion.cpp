// Type Conversion: int -> char i.e basic -> basic
// Type Conversion: basix -> user defined

#include<iostream>
using namespace std;

class dist
{
    int km, meter;
    public:
        dist(float len)
        {
            km = static_cast<int>(len);  
            meter = static_cast<int>((len - km) * 1000);  
        }

        void display()
        {
            cout << "Km: " << km << ". Meter: " << meter << endl;
        }
};

int main()
{
    
    int a = 98;
    char v = static_cast<char>(a); //basic tp basic type conversion
    cout << v << endl;  
    

    float len;
    cout << "Enter distance in Kilometer.Meter : " << endl;
    cin >> len;
    
    dist d1(len);  // Using constructor conversion and basic to user defined conversion
    d1.display();
    
    return 0;
}