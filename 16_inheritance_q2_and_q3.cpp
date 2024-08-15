#include <bits/stdc++.h>

using namespace std;

class Person {
public:
    string name;
    int age;
    
    // Constructor
    Person(string name, int age) {
        cout << "Base class constructor called" << endl;
        this->name = name;
        this->age = age;
    }

    // Destructor
    ~Person() {
        cout << "Base class destructor called" << endl;
    }
};

class Student : public Person {
public:
    int rollno;
    
    // Constructor
    Student(string name, int age, int rollno) : Person(name, age) {
        cout << "Derived class constructor called" << endl;
        this->rollno = rollno;
    }

    // Destructor
    ~Student() {
        cout << "Derived class destructor called" << endl;
    }
};

int main() {
    Student s("Antriksh", 21, 16);
    cout << s.name << " " << s.age << " " << s.rollno << endl;
    return 0;
}