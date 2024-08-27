#include <iostream>

using namespace std;

// Abstract class
class AbstractClass {
public:
    // Pure virtual function
    // A class containing at least one pure virtual function is called an abstract class
    virtual void pureVirtualFunction() = 0;

    // Normal function
    void normalFunction() {
        cout << "Virtual function." << endl;
    }
};

// Derived class
class DerivedClass : public AbstractClass {
public:
    // Need to implement the pure virtual function in the derived class
    void pureVirtualFunction() {
        cout << "Pure virtual function." << endl;
    }
};

int main() {
    DerivedClass derivedClass;
    derivedClass.pureVirtualFunction();
    derivedClass.normalFunction();
    return 0;
}