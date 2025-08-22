#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    // Dynamically allocate memory for n integers
    int* arr = new int[n];

    // Input elements
    cout << "Enter " << n << " numbers:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Display elements
    cout << "You entered: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Free the allocated memory
    delete[] arr;

    cout << "Memory freed successfully!" << endl;
    return 0;
}
