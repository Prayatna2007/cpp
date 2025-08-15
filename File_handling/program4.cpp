#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    string line;
    ifstream file1("test.txt");
    if(file1.is_open())
    {
        while(getline(file1,line))
        {
            cout<<line<<endl;
        }
        file1.close();
    }
    else
        cout<<"Unable to open file....";
    return 0;
}