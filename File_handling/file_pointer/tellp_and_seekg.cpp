// seekg() -> this fn is member of ifstream. It is used to move the get pointer to the specific position.
// seekp() -> this fn is member of ofstream. It is used to move the put pointer to the specific position.
// tellg() -> this fn is member of ifstream. It gives the current position of get pointer.
// tellp() -> this fn is member of ofstream. It gives the current position of put pointer.

// Reference pointer for seekg() and seekp()
// ->ios::beg (to go to beginning of file)
// ->ios::cur (to go to current position of file)
// ->ios::end (to go to ending of file)

// Syntax:
// seekg(Number of Bytes, reference_ptr);
// seekp(Number of Bytes, reference_ptr);
#include<iostream>
#include<fstream>
using namespace std;
int main()
{   
    int pos;
    char str[80];
    fstream ofile;
    ofile.open("Sample",ios::out|ios::in);
    ofile<<"This is a Sample file:";
    cout<<"Current Position of Put Pointer:";
    cout<<ofile.tellp();
    cout<<"\nEnter the position to move from beginning:";
    cin>>pos;
    ofile.seekg(pos,ios::beg);
    cout<<"\nThe position of get pointer is:";
    cout<<ofile.tellg();
    ofile.getline(str,60);
    cout<<"Remaining Words:"<<endl<<str;
    return 0;
}