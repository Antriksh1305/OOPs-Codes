#include <bits/stdc++.h>

using namespace std;

class Admin {
private:
// can be accessed only in the same class
    string adminId;

protected:
// can be accessed only in the same class or in the derived class
    string collegeName;

public:
// can be accessed everywhere
    // setter
    void setAdminId(string id) {
        adminId = id;
    }

    // getter
    string getAdminId() {
        return adminId;
    }
};

class College : public Admin {
public:
// can be accessed everywhere
    string collegeLocation;

    // setter
    void setCollegeName(string name) {
        collegeName = name;
    }

    // getter
    string getCollegeName() {
        return collegeName;
    }
};

int main() {
    Admin admin;
    admin.setAdminId("Admin123");
    
    College clg;
    clg.setCollegeName("My College");
    clg.collegeLocation = "New York";

    cout<<admin.getAdminId()<<endl;
    cout<<clg.getCollegeName()<<endl;
    cout<<clg.collegeLocation<<endl;

    return 0;
}