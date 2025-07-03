// Counting total no of objects created using ststic variable

#include <iostream>
using namespace std;

class Count {  
public:
    static int c;  
    
    Count() {
        c++;
    }
    

}c3;

// Initialize static member
int Count::c = 0;

int main() {
    Count c1;
    Count c2;
    
    cout << "Total objects created: " << Count::c << endl;
    
    return 0;
}