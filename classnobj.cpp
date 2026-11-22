
#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int age;

    void introduce() {
        cout << "Hello, my name is " << name << endl;
        cout << "I am " << age << " years old." << endl;
    }
};

int main() {
    Student s1;

    s1.name = "Chahat";
    s1.age = 20;

    s1.introduce();

    return 0;
}
