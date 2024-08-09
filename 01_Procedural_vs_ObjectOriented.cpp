#include <bits/stdc++.h>

using namespace std;

class Calculator {
    public:
        int add(int a, int b) {
            return a+b;
        }
};

int add(int a, int b) {
    return a+b;
}

int main() {
    // Procedural Programming
    int result = add(1,2);
    cout<<result<<endl;
    
    // Object Orientd Programming
    Calculator obj;
    cout<<obj.add(1,2)<<endl;
    
    return 0;
}