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

    void show(double a) {
        cout << "Show A with double: " << a << endl;
    }

    void show(int a, double b) {
        cout << "Show A with int and double: " << a << " " << b << endl;
    }
};

class Complex {
private:
    int real, imaginary;

public:
    Complex(int r, int i) {
        real = r;
        imaginary = i;
    }

    Complex operator+(Complex const &obj) {
        return Complex(real + obj.real, imaginary + obj.imaginary);
    }

    Complex operator-(Complex const &obj) {
        return Complex(real - obj.real, imaginary - obj.imaginary);
    }

    void print() {
        cout << real << " + i" << imaginary << endl;
    }
};

int main() {
    // Compile Time Polymorphism
    // Compile Time Polymorphism has two types: Function Overloading and Operator Overloading

    // Function Overloading: Same function name but different parameters
    A obj;
    obj.show();
    obj.show(5);
    obj.show(5.5);
    obj.show(5, 5.5);

    // Operator Overloading: Same operator but different functionality
    Complex c1(10, 5), c2(2, 4);
    Complex c3 = c1 + c2;
    Complex c4 = c1 - c2;
    c3.print();
    c4.print();

    return 0;
}