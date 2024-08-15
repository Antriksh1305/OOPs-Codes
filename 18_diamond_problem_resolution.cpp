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
class B : virtual public A { };

// Virtual inheritance
class C : virtual public A { };

// With virtual: Only one shared instance of A is created, which prevents duplication and resolves the diamond problem.
class D : public B, public C { };

int main() {
    D obj;
    obj.x = 10;     // Only one x in D, no ambiguity
    obj.display();  // Only one display() method in D, no ambiguity

    return 0;
}
