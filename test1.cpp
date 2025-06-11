#include<iostream>
#include<iomanip>
using namespace std;
int c;
int main()
{
    cout<<"Enter your choice:";
    cin>>c;
    switch(c)
    {
        case 1:
            cout<<"Balance is 2000";
            break;
        case 2:
            cout<<"Pin Changed";
            break;
        case 3:
            cout<<"Fast QR Scanned";
            break;
        case 4:
                cout<<"Exiting.....";
                break;
        default:
            cout<<"Invalid Input";
    }

    return 0;
}