#include <bits/stdc++.h>

using namespace std;

class Base {
public:
    void display() {
        cout << "Base class display function called" << endl;
    }
};

class Derived : public Base {
public:
    void display() {
        cout << "Derived class display function called" << endl;
    }
};

int main() {
    Derived obj;
    obj.display();          // Derived class function called
    obj.Base::display();    // Base class function called
    return 0;
}