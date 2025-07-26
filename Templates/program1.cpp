#include <iostream>
using namespace std;
template<typename T>

class Calc {
public:
    T add(T a, T b) { return a + b; }
    T mul(T a, T b) { return a * b; }
};

int main() {
    Calc<int> c;
    cout << c.add(2,3) << " " << c.mul(4,5)<<endl;
    return 0;
}