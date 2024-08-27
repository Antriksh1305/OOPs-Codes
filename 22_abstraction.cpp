#include <iostream>

using namespace std;

// Abstract class
class Animal {
public:
    // Pure virtual function
    // A class containing at least one pure virtual function is called an abstract class
    virtual void speak() = 0;
    void breathe() const {
        std::cout << "Breathing." << std::endl;
    }
};

// Derived class
class Dog : public Animal {
public:
    // Need to implement the pure virtual function in the derived class
    void speak() {
        std::cout << "Woof!" << std::endl;
    }
};

int main() {
    Dog dog;
    dog.speak();
    dog.breathe();
    return 0;
}