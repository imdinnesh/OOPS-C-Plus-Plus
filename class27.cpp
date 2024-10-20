#include <iostream>
using namespace std;

class Base {
public:
    virtual void show() {
        cout << "Base class show function" << endl;
    }
    virtual void print() {
        cout << "Base class print function" << endl;
    }
};

class Derived : public Base {
public:
    void show(){
        cout << "Derived class show function" << endl;
    }
    void print(){
        cout << "Derived class print function" << endl;
    }
};

int main() {
    Base* b;
    Derived d;
    b = &d;

    // Virtual function, binded at runtime
    b->show();  // Output: Derived class show function
    b->print(); // Output: Derived class print function

    return 0;
}