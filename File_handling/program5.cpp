#include<iostream>
#include<fstream>
using namespace std;
char ch[500];
int main()
{
    ifstream file1("test.txt");
    ofstream file2("copytest1.txt");
    while(file1)
    {
        file1.read(ch,500);
        file2.write(ch,500);
    }
    
    file1.close();
    file2.close();
    return 0;
}