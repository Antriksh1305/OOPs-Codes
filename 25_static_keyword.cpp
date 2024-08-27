#include <bits/stdc++.h>

using namespace std;

class StaticClass {
public:
    // Static member variable
    static int staticVariable;

    // Static member function
    static void staticFunction() {
        cout << "Static function." << endl;
    }
};

// Need to define the static member variable outside the class
int StaticClass::staticVariable = 10;

int main() {
    // Accessing static member variable
    cout << StaticClass::staticVariable << endl;

    // Accessing static member function
    StaticClass::staticFunction();
    return 0;
}