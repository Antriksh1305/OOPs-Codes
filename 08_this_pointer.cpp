#include <iostream>

class MyClass {
private:
    int x;
public:
    // setter
    // this is a pointer that points to the object that invokes the member function.
    // Note-> in Java `this` is a reference (not a pointer) that refers to the current object, while in C++ it is a pointer.
    void setX(int x) {
        this->x = x;
    }

    // getter
    void printAddress() {
        std::cout << "Address of this pointer: " << this << std::endl;
    }

    void printX() {
        std::cout << "Value of x: " << x << std::endl;
    }
};

int main() {
    MyClass obj;
    obj.setX(10);

    obj.printAddress();
    obj.printX();
    return 0;
}