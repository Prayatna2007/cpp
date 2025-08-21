#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream inFile("num.txt");   // Input file
    ofstream oddFile("odd.txt");  // File for odd numbers
    ofstream evenFile("even.txt"); // File for even numbers

    if (!inFile) {
        cout << "Error: Could not open num.txt" << endl;
        return 1;
    }

    int num;
    while (inFile >> num) { // Read numbers from file
        if (num % 2 == 0)
            evenFile << num << " ";
        else
            oddFile << num << " ";
    }

    cout << "Numbers have been separated into odd.txt and even.txt" << endl;

    inFile.close();
    oddFile.close();
    evenFile.close();

    return 0;
}
