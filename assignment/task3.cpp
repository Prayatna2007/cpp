#include <iostream>
using namespace std;

class Employee {
private:
    int emp_id;
    string name;
    string post;
    
    void showdata() {
        cout << "\nEmployee Details:" << endl;
        cout << "ID: " << emp_id << endl;
        cout << "Name: " << name << endl;
        cout << "Post: " << post << endl;
    }

public:
    void setdata() {
        cout << "Enter Employee ID: ";
        cin>>emp_id;
        
        cout << "Enter Employee Name: ";
        cin>>name;
        
        cout << "Enter Employee Post: ";
        cin >> post;
    }
    
    void display() {
        showdata();
    }
}e1;

int main() {
    
    cout << "Enter details for Employee 1:" << endl;
    e1.setdata();
    
    e1.display();
    
    return 0;
}