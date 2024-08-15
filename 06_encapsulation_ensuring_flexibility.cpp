#include <bits/stdc++.h>

using namespace std;

// abstract class
class Storage {
public:
    virtual void saveData(const string &data) = 0;
    virtual string loadData() = 0;
    virtual ~Storage() = default;
};

// File Storage Class - Concrete Class
class FileStorage : public Storage {
public:
    void saveData(const string &data) override {
        ofstream file("data.txt");
        if (file.is_open()) {
            file << data;
            file.close();
        }
    }

    string loadData() override {
        ifstream file("data.txt");
        string data;
        if (file.is_open()) {
            getline(file, data);
            file.close();
        }
        return data;
    }
};

// Cloud Storage Class - Concrete Class
class CloudStorage : public Storage
{
public:
    void saveData(const string &data) override {
        // Simulate saving data to the cloud
        cout << "Data saved to the cloud: " << data << endl;
    }

    string loadData() override {
        // Simulate loading data from the cloud
        return "Data loaded from the cloud";
    }
};

// Function to perform storage operations
/*
    In the main function, the performStorageOperations function is used to interact with storage.
    Initially, it uses FileStorage, but later, it switches to CloudStorage.
    Since both classes implement the same interface, the rest of the system doesn’t need to be modified 
    when switching storage methods.

    This demonstrates the flexibility provided by polymorphism and the ability to switch between different implementations
*/
void performStorageOperations(Storage &storage) {
    storage.saveData("Hello, World!");
    string data = storage.loadData();
    cout << "Loaded data: " << data << endl;
}

int main()
{
    // Initially using FileStorage
    FileStorage fileStorage;
    performStorageOperations(fileStorage);

    // Later switching to CloudStorage
    CloudStorage cloudStorage;
    performStorageOperations(cloudStorage);

    return 0;
}