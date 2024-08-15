#include <bits/stdc++.h>

using namespace std;

class shallow_Deep_Copy {
private:
    int a;
    int *b;

public:
    shallow_Deep_Copy(int x, int y) {
        a = x;
        b = new int;
        *b = y;
    }

    // Shallow Copy constructor
    // We are just copying the values of the object
    shallow_Deep_Copy(const shallow_Deep_Copy &source) {
        a = source.a;
        b = source.b;
    }

    // Deep Copy constructor
    // We need to allocate memory for the new object
    shallow_Deep_Copy(const shallow_Deep_Copy &source) {
        a = source.a;
        b = new int;
        *b = *source.b;
    }

    // Default Destructor doesn't delete the memory allocated by new keyword
    // So, we need to define our own destructor
    ~shallow_Deep_Copy() {
        delete b;
    }

    void display() {
        cout << "a: " << a << " b: " << *b << endl;
    }
};