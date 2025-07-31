#include<iostream>
using namespace std;

int main() {
    char c, d[10], e[10];
    
    cout << "Enter 10 char:";
    cin.read(e, 10);  // Safer than read()

    cout << "Enter a character:";
    cin.get(c);
    cin.ignore();  // Remove leftover '\n'

    cout << "Enter 10 char:";
    cin.getline(d, 10);  // Reads until Enter (no need for ignore() after getline)

    

    cout.write(e, 10) << endl;  // Will print first 10 chars (may include garbage if input was shorter)
    cout.put(c) << endl;
    cout << d << endl;
    
    return 0;
}