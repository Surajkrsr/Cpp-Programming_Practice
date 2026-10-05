#include <iostream>
using namespace std;

class Student {
    string name;
    int age;

public:
    Student(string n = "Unknown", int a = 18) {
        name = n;
        age = a;
    }

    void display() {
        cout << name << " " << age << endl;
    }
};

int main() {
    Student s1;              // uses both default values
    Student s2("Suraj");     // age uses default value
    Student s3("Rahul", 20); // no default value needed

    s1.display();
    s2.display();
    s3.display();

    return 0;
}