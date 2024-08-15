#include<bits/stdc++.h>

using namespace std;

// This is a class
class MyClass {
public:
    void function() {
        cout<<"This is a class member function / method"<<endl;
    }
};

int main(){
    // this is an object -> an instance of a class
    MyClass obj;
    obj.function();
    return 0;
}