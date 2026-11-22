
#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int age;

    Student() {
        name = "Chahat";
        age = 19;
    }

    void display() {
        cout << "Student Name: " << name << endl;
        cout << "Student Age: " << age << endl;
    }
};

int main() {
    Student s1;

    s1.display();

    return 0;
}
