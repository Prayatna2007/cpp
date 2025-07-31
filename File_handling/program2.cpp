#include<iostream>
#include<fstream>
using namespace std;
int main()
{   
    cout<<"Example for Formatted IO using IOS membere function."<<endl;

    cout<<"Default: ";
    cout<<123<<endl;

    cout<<"width(15): ";
    cout.width(15);
    cout<<123<<endl;

    cout<<"width(15) and fill('_'): "<<endl;
    cout.width(15);
    cout.fill('_');
    cout<<123<<endl;

    cout.precision(3);
    cout<<"precision(3) --> "<< 12.4567890<<endl;
    cout<<"precision(3) --> "<< 9.876543210<<endl;
    
    cout<<"setf(showbase): "<<endl;
    cout.setf(ios::showbase);
    cout<<hex<<123<<endl;

    cout<< "unset(showbase): "<<endl;
    cout.unsetf(ios::showbase);
    cout<<hex<<123 <<endl;

    cout<<"setf(showpoint): "<<endl;
    cout.setf(ios::showpoint);
    cout<<123.123<<endl;

    cout<< "unset(showpoint): "<<endl;
    cout.unsetf(ios::showpoint);
    cout<<123.123 <<endl;

    return 0;
}