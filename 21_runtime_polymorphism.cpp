#include <bits/stdc++.h>

using namespace std;

// GFG Link for Virtual Function and Runtime Polymorphism examples (good ones for interviews)
// https://www.geeksforgeeks.org/virtual-functions-and-runtime-polymorphism-in-cpp/?ref=asr1

class A {
public:
    A() {
        cout << "Constructor A" << endl;
    }

    virtual void show() {
        cout << "Show A" << endl;
    }
};

class B : public A {
public:
    B() {
        cout << "Constructor B" << endl;
    }

    void display() {
        cout << "Display B" << endl;
    }

    virtual void show() {
        cout << "Show B" << endl;
    }
};

class C : public B {
public:
    C() {
        cout << "Constructor C" << endl;
    }

    void display() {
        cout << "Display C" << endl;
    }

    void show() {
        cout << "Show C" << endl;
    }
};

int main() {
    A *obj = new B();
    obj->show();

    delete obj;
    return 0;
}