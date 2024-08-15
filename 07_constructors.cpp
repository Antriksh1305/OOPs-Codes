#include <bits/stdc++.h>

using namespace std;

class MyClass {
private:
    int a;
    int b;
public:
    // Note: When we create our own constructor, the default constructor is not created by the compiler.
    // If we want to use the default constructor, we have to define it ourselves.

    // Constructor: A special member function that is called when an object is created.
    // Default constructor: A constructor that doesn't take any arguments.
    MyClass() {
        cout << "Default constructor called" << endl;
        a = 0;
        b = 0;
    }

    // Parameterized constructor: A constructor that takes arguments.
    MyClass(int x, int y) {
        cout << "Parameterized constructor called" << endl;
        a = x;
        b = y;
    }

    // Copy constructor: A constructor that initializes an object using another object of the same class.
    // Note: in C++, we have a default copy constructor that does a shallow copy.
    // Shallow copy: When we copy the values of the object, but not the memory location.
    // Deep copy: When we copy the values of the object and the memory location.

    // While in Java, we dont have a copy constructor, but we can create a copy constructor by using the clone() method.
    MyClass(MyClass &obj) {
        this->a = obj.a;
        this->b = obj.b;
    }

    // getter
    void get() {
        cout << a << " " << b << endl;
    }
};

int main() {
    MyClass obj1; // Default constructor called
    MyClass obj2(10, 20); // Parameterized constructor called
    MyClass obj3 = obj2; // Copy constructor called

    obj1.get(); // 0 0
    obj2.get(); // 10 20
    obj3.get(); // 10 20
    
    return 0;
}