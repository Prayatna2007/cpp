#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream file1("test.txt");
    file1<<"Hello I am Jose Maurinhoo"<<endl;
    file1.close();
    return 0;
}