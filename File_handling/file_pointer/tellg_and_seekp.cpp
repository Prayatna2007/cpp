#include <iostream>
#include <fstream>
using namespace std;

int main() {
    fstream file;

    // open file in read/write mode, truncate old content
    file.open("MixedPointers.txt", ios::in | ios::out | ios::trunc);

    if (!file) {
        cerr << "Error opening file!" << endl;
        return 1;
    }

    // Write initial content
    file << "HelloWorld";
    file.flush();

    // Move get pointer to beginning
    file.seekg(0, ios::beg);
    cout << "Initial get pointer position: " << file.tellg() << endl;

    // Read first 5 characters
    char buffer[6];
    file.read(buffer, 5);
    buffer[5] = '\0';
    cout << "First 5 chars read: " << buffer << endl;

    cout << "Get pointer after reading: " << file.tellg() << endl;

    // Now move put pointer to position 5 and overwrite
    file.seekp(5, ios::beg);
    cout << "Put pointer after seekp(5, ios::beg): " << file.tellp() << endl;

    file << "123";   // overwrite characters 6–8
    file.flush();

    // Show final content
    file.seekg(0, ios::beg); // reset get pointer
    string content;
    getline(file, content);
    cout << "Final file content: " << content << endl;

    file.close();
    return 0;
}
