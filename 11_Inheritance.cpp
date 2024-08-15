#include<bits/stdc++.h>

using namespace std;

class A {
public:
    int x;
};

class B : public A {
public:
    int y;
    void display() {
        cout << "Display from class B, x = " << x << ", y = " << y << endl;
    }
};

int main() {
    B obj;
    obj.x = 10;
    obj.y = 20;
    obj.display();  // Display from class B, x = 10, y = 20

    return 0;
}