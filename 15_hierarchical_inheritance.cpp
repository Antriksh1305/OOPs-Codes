#include <bits/stdc++.h>

using namespace std;

class A {
public:
    int x;
    int y;
};

class B : public A {
public:
    void display() {
        cout << "Display from class B, x = " << x << endl;
    }
};

class C : public A {
public:
    void display() {
        cout << "Display from class C, y = "<< y << endl;
    }
};

int main() {
    B obj1;
    obj1.x = 10;
    obj1.display();  // Display from class B, x = 10

    C obj2;
    obj2.y = 20;
    obj2.display();  // Display from class C, y = 20
    return 0;
}