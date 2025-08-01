#include <iostream>
using namespace std;

int main() {
    try {
        int numerator, denominator;
        cout << "Enter numerator and denominator: ";
        cin >> numerator >> denominator;
        
        if (denominator == 0) {
            throw runtime_error("Division by zero!");
        }
        if (numerator < 0 || denominator < 0) {
            throw invalid_argument("Negative values not allowed!");
        }
        
        cout << "Result: " << numerator/denominator << endl;
    }
    catch(const runtime_error& e) {
        cerr << "Runtime error: " << e.what() << endl;
    }
    catch(const invalid_argument& e) {
        cerr << "Invalid argument: " << e.what() << endl;
    }
    catch(...) {
        cerr << "Unknown exception occurred!" << endl;
    }
    
    return 0;
}