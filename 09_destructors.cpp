#include<iostream>

using namespace std;

class MyClass {
private:
    int a;
    int b;
public:
    // Destructor: A special member function that is called when an object is destroyed.
    // Destructor is called when:
    // 1. The object goes out of scope.
    // 2. The delete operator is used to destroy an object.
    // 3. The program terminates.
    ~MyClass() {
        cout << "Destructor called" << endl;
    }
};

int main() {
    MyClass obj;
    return 0;
}