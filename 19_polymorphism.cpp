#include <bits/stdc++.h>

using namespace std;

class A {
public:
    A() {
        cout << "Constructor A" << endl;
    }

    void show() {
        cout << "Show A" << endl;
    }

    void show(int a) {
        cout << "Show A with int: " << a << endl;
    }
};

int main() {
    // Polymorphism: The ability to take many forms
    // same function but different output
    // this is polymorphism

    // Two Types: Compile Time Polymorphism and Runtime Polymorphism

    A obj;
    obj.show();
    obj.show(5);
    return 0;

    // Operator Overloading: Same operator but different functionality
}