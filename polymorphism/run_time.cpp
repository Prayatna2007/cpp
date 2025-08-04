#include <iostream>
using namespace std;

class Animal {
public:
    virtual void speak() {  // 'virtual' enables runtime binding
        cout << "Animal sound!" << endl;
    }
};

class Dog : public Animal {
public:
    void speak() {  // Overrides base class function
        cout << "Bark!" << endl;
    }
};

class Cat : public Animal {
public:
    void speak() {
        cout << "Meow!" << endl;
    }
};

int main() {
    Animal* animal;
    
    Dog dog;
    Cat cat;
    
    animal = &dog;
    animal->speak();  // Calls Dog's speak() (Output: Bark!)
    
    animal = &cat;
    animal->speak();  // Calls Cat's speak() (Output: Meow!)
    
    return 0;
}