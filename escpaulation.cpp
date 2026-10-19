
#include <bits/stdc++.h>
using namespace std;

class Student {
private:
    int id;
    int age;
    string name;
    int nos;

public:
    // Default constructor
    Student() {
        cout << "Default constructor called" << endl;
        id = 0;
        age = 0;
        name = "";
        nos = 0;
    }

    // Parameterized constructor
    Student(int id, int age, string name, int nos) {
        cout << "Parameterized constructor called" << endl;
        this->id = id;
        this->age = age;
        this->name = name;
        this->nos = nos;
    }

    // Copy constructor
    Student(const Student &srcobj) {
        cout << "Copy constructor called" << endl;
        this->id = srcobj.id;
        this->age = srcobj.age;
        this->name = srcobj.name;
        this->nos = srcobj.nos;
    }

    // Getters
    int getId() {
        return id;
    }

    int getAge() {
        return age;
    }

    string getName() {
        return name;
    }

    int getNos() {
        return nos;
    }

    // Setters
    void setId(int id) {
        this->id = id;
    }

    void setAge(int age) {
        if (age > 0 && age < 120) {
            this->age = age;
        } else {
            cout << "Invalid age!" << endl;
        }
    }

    void setName(string name) {
        //here we can add the layer of authication in our program.
        this->name = name;
    }

    void setNos(int nos) {
        if (nos >= 0) {
            this->nos = nos;
        } else {
            cout << "Invalid number of subjects!" << endl;
        }
    }

    // Member functions
    void study() {
        cout << name << " is studying" << endl;
    }

    void sleep() {
        cout << "My student is sleeping" << endl;
    }
};

int main() {
    // Dynamic memory allocation
    Student *A = new Student(1, 34, "Rishi", 7);

    // Access data using getters
    cout << "Student ID: " << A->getId() << endl;
    cout << "Student Age: " << A->getAge() << endl;
    cout << "Student Name: " << A->getName() << endl;
    cout << "Number of Subjects: " << A->getNos() << endl;

    // Modify data using setters
    A->setAge(20);
    cout << "Updated Age: " << A->getAge() << endl;

    // Invalid value is rejected
    A->setAge(-100);

    // Call member functions
    A->study();
    A->sleep();

    // Copy constructor
    Student B = *A;
    cout << "Copied Student: " << B.getName() << endl;

    // Release dynamically allocated memory
    delete A;
    A = nullptr;

    return 0;
}
