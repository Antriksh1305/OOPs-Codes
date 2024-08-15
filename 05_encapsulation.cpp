#include<iostream>

using namespace std;

class Teacher {
private:
// keeping sensitive information protected
// reducing risk of data corruption and unauthorised modifications
    string teacherId;
    string password;
public:
// accessible everywhere
// implementing functions to change or retrieve information
    // setters
    void setTeacherId(string id) {
        teacherId = id;
    }

    void setPassword(string pass) {
        password = pass;
    }

    // getters
    string getTeacherId() {
        return teacherId;
    }
};

int main() {
    Teacher obj;

    obj.setTeacherId("T001");
    obj.setPassword("1234");

    cout << "Teacher ID: " << obj.getTeacherId() << endl;

    return 0;
}