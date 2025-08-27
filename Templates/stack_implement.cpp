// Stack Implementation Using Class Templates
#include <iostream>
#include <string>
using namespace std;

template <class T>
class Stack {
    T arr[100];   // fixed-size stack
    int top;

public:
    Stack() { top = -1; }

    void push(T value) {
        if (top == 99) {
            cout << "Stack Overflow!" << endl;
            return;
        }
        arr[++top] = value;
    }

    void pop() {
        if (top == -1) {
            cout << "Stack Underflow!" << endl;
            return;
        }
        top--;
    }

    T peek() {
        if (top == -1) {
            cout << "Stack is empty!" << endl;
            return T(); // return default value of T
        }
        return arr[top];
    }

    bool isEmpty() {
        return (top == -1);
    }
};

int main() {
    // Stack of integers
    Stack<int> intStack;
    intStack.push(10);
    intStack.push(20);
    intStack.push(30);

    cout << "Top of intStack: " << intStack.peek() << endl;
    intStack.pop();
    cout << "Top after pop: " << intStack.peek() << endl;

    // Stack of strings
    Stack<string> stringStack;
    stringStack.push("Apple");
    stringStack.push("Banana");
    stringStack.push("Cherry");

    cout << "\nTop of stringStack: " << stringStack.peek() << endl;
    stringStack.pop();
    cout << "Top after pop: " << stringStack.peek() << endl;

    return 0;
}
