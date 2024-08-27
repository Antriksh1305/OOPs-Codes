#include <iostream>

using namespace std;

class A {
public:
    int x;
    void display() {
        cout << "Display from class A, x = " << x << endl;
    }
};

// Virtual inheritance
class B : public A { };

// Virtual inheritance
class C : public A { };

class D : public B, public C { };

int main() {
    D obj;
    // obj.x = 10;     // error: request for member 'x' is ambiguous
    // obj.display();  // error: request for member 'display' is ambiguous
    return 0;
}
