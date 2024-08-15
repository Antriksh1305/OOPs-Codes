#include <bits/stdc++.h>

using namespace std;

class A {
public:
    int x;
};

class B : public A {
public:
    int y;
};

class C : public B {
public:
    void display() {
        cout << "Display from class C, x = " << x << ", y = " << y << endl;
    }
};


int main() {
    C obj;
    obj.x = 10;
    obj.y = 20;
    obj.display();  // Display from class C, x = 10, y = 20
    return 0;
}