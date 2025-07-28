#include<iostream>
using namespace std;

class Prayatna {
    int code;
    string msg;
public:
    Prayatna(int c, const string& s) : code(c), msg(s) {}
    void display() {
        cout << "Message is: " << msg << " Insufficient Balance is: " << code << endl;
    }
};

class Account : public Prayatna {
    string name;
    float balance;
    float amt;
public:
    Account(string n, float b) : name(n), balance(b), Prayatna(0, "") {} // Need to initialize base class
    void withdraw() {
        cout << "Enter the amount: ";
        cin >> amt;
        try {
            if (this->balance < amt)
                throw Prayatna(amt-  this->balance, "Insufficient Balance ");
            else {
                cout << "Withdraw is done" << endl;
                cout << "Your Amount left is: " << this->balance - amt;
            }
        }
        catch (Prayatna p) {
            p.display();
        }
    }
};
int main()
{
    Account a1("Gauri",1500);
    a1.withdraw();
    return 0;

}