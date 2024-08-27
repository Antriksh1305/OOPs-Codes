#include <bits/stdc++.h>

using namespace std;

class Parent {
public:
    int parentVariable = 10;
    Parent() {
        cout << "Parent constructor." << endl;
    }

    void display() {
        cout << "Parent class." << endl;
    }
};

class Child : public Parent {
public:
    int childVariable = 20;
    Child() {
        // Invoking Parent Class Constructor
        Parent();
        cout<< "Child constructor." << endl;
    }

    void display() {
        cout << "Child class." << endl;
    }
};

int main() {
    Child child;
    
    // Accessing parent class variable using scope resolution operator
    cout << child.Parent::parentVariable << endl;
    
    // Accessing parent class method using scope resolution operator
    child.Parent::display();
    return 0;
}