#include <bits/stdc++.h>

using namespace std;

// Final class
class FinalClass final {
public:
    void finalFunction() {
        cout << "Final function." << endl;
    }
};

// Derived class
// Error: Cannot inherit from final class 'FinalClass'
// class DerivedClass : public FinalClass {
// public:
//     void finalFunction() {
//         cout << "Final function." << endl;
//     }
// };

class FinalMethod {
public:
    // Final method
    virtual void finalMethod() final {
        cout << "Final method." << endl;
    }
};

// Error: Cannot override final method 'finalMethod' in 'DerivedMethod'
// class DerivedMethod : public FinalMethod {
// public:
//     void finalMethod() {
//         cout << "Final method." << endl;
//     }
// };

class ConstVariable {
public:
    // Constant member variable
    // Cannot change the value of constVariable
    const int constVariable = 10;
};

int main() {
    FinalClass finalClass;
    finalClass.finalFunction();

    FinalMethod finalMethod;
    finalMethod.finalMethod();

    ConstVariable constVariable;
    cout << constVariable.constVariable << endl;
    return 0;
}