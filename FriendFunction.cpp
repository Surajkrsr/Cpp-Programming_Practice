#include <iostream>
using namespace std;

class Student{
    private:
        int marks = 90;

        public:
            friend void display(Student s);

};

void display(Student s){
    cout << "marks = " << s.marks; 
}
int main(){
    Student s;
    display(s);

    return 0;
}