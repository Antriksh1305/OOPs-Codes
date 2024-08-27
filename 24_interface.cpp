#include <bits/stdc++.h>

using namespace std;

// Interface
class Interface {
public:
    // Pure virtual function
    // A class containing only pure virtual function (atleast 1) is called an interface
    virtual void pureVirtualFunction() = 0;
};

// Derived class
class DerivedClass : public Interface {
public:
    // Need to implement the pure virtual function in the derived class
    void pureVirtualFunction() {
        cout << "Pure virtual function." << endl;
    }
};

int main() {
    DerivedClass derivedClass;
    derivedClass.pureVirtualFunction();
    return 0;
}