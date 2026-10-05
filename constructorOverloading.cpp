#include <iostream>
using namespace std;

class Student {
    string name;
    int age;

public:
    // Constructor 1: no arguments
    Student() {
        name = "Unknown";
        age = 0;
    }

    // Constructor 2: one argument
    Student(string n) {
        name = n;
        age = 0;
    }

    // Constructor 3: two arguments
    Student(string n, int a) {
        name = n;
        age = a;
    }

    void display() {
        cout << name << " " << age << endl;
    }
};

int main() {
    Student s1;
    Student s2("Suraj");
    Student s3("Suraj", 20);

    s1.display();
    s2.display();
    s3.display();

    return 0;
}