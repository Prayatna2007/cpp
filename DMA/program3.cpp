#include <iostream>
#include <cstdlib>   // for calloc, free
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    // Dynamic memory allocation using calloc
    int* arr = (int*) calloc(n, sizeof(int));
    if (arr == NULL) {
        cout << "Memory allocation failed!" << endl;
        return 1;
    }

    cout << "Initial values (calloc initializes to 0): ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";   // all will be 0
    }
    cout << endl;

    cout << "Enter " << n << " numbers:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "You entered: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Free the memory
    free(arr);

    cout << "Memory freed successfully!" << endl;
    return 0;
}
