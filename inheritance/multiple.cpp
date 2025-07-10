#include <iostream>
using namespace std;

class Camera {
public:
    void takePhoto() {
        cout << "Taking a photo" << endl;
    }
};

class Phone {
public:
    void makeCall() {
        cout << "Making a call" << endl;
    }
};

class Smartphone : public Camera, public Phone {
public:
    void browseInternet() {
        cout << "Browsing internet" << endl;
    }
};

int main() {
    cout << "Multiple Inheritance Example:" << endl;
    Smartphone myPhone;
    myPhone.takePhoto();     // From Camera
    myPhone.makeCall();      // From Phone
    myPhone.browseInternet(); // Own method
    
    return 0;
}