#include <iostream>
using namespace std;

class Student {
private:
    int rollNo;
    string name;

public:
    Student(int r, string n) {
        rollNo = r;
        name = n;
    }

    // Copy Constructor
    Student(const Student &obj) {
        rollNo = obj.rollNo;
        name = obj.name;
    }

    void display() {
        cout << "Roll No: " << rollNo << ", Name: " << name << endl;
    }
};

int main() {
    Student s1(101, "Prince");   
    Student s2 = s1;             // Copy constructor

    cout << "Original Object:\n";
    s1.display();

    cout << "Copied Object:\n";
    s2.display();

    return 0;
}
