#include <iostream>
#include <string>
using namespace std;

class Book {
private:
    string title;
    string author;
    int year;
    float price;

public:
   
    Book(string t, string a, int y, float p) {
        title = t;
        author = a;
        year = y;
        price = p;
    }

  
    void display() {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Year: " << year << endl;
        cout << "Price: $" << price << endl << endl;
    }

 
    ~Book() {
        cout << "Destructor Executed!! (" << title << " destroyed)" << endl;
    }
};

int main() {
   
    Book book1("The Great Gatsby", "F. Scott Fitzgerald", 1925, 12.99);
    cout << "Book 1 details:" << endl;
    book1.display();

   
    Book book2 = book1;
    cout << "Book 2 (copy of Book 1) details:" << endl;
    book2.display();

    return 0;
}