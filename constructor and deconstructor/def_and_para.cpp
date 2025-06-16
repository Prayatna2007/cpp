#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    int emp_id;
    string name;
    string post;

public:
    
    Employee() {
        emp_id = 10;
        name = "Cristiano Ronaldo";
        post = "CEO";
    }

    Employee(int id, string n, string p) {
        emp_id = id;
        name = n;
        post = p;
    }

    void showdata() {
        cout << "Employee ID: " << emp_id << endl;
        cout << "Name: " << name << endl;
        cout << "Post: " << post << endl << endl;
    }
};

int main() {
    
    Employee e1;
    cout << "Default employee details (e1):" << endl;
    e1.showdata();

    
    int id;
    string name, post;
    
    cout << "Enter Employee ID: ";
    cin >> id;
    cin.ignore(); 
    cout << "Enter Name: ";
    getline(cin, name);
    cout << "Enter Post: ";
    getline(cin, post);
 
    Employee e2(id, name, post);
    cout << "\nUser provided employee details (e2):" << endl;
    e2.showdata();

    Employee e3 = e2;
    cout << "Copied employee details (e3):" << endl;
    e3.showdata();

    return 0;
}