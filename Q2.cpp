#include <iostream>
#include <string>
#include <sstream>
using namespace std;

class Student {
private:
    string stdID;
    string stdName;
    string dept;

public:
    Student() {
        stdID = "";
        stdName = "";
        dept = "";
        cout << "Default constructor called" << endl;
    }

    Student(string id, string name) {
        stdID = id;
        stdName = name;
        dept = "";
        cout << "Constructor 1 called" << endl;
    }

    Student(string id, string name, string department) {
        stdID = id;
        stdName = name;
        dept = department;
        cout << "Constructor 2 called" << endl;
    }

    Student(int x, string name, string department) {
        stringstream ss;
        ss << x;
        stdID = ss.str();
        stdName = name;
        dept = department;
        cout << "Constructor 3 called" << endl;
    }

    Student(const Student &obj) {
        stdID = obj.stdID;
        stdName = obj.stdName;
        dept = obj.dept;
        cout << "Copy constructor called" << endl;
    }

    void displayData() {
        cout << "ID: " << stdID << endl;
        cout << "Name: " << stdName << endl;
        cout << "Department: " << dept << endl;
        cout << "------------------------" << endl;
    }

    ~Student() {
        cout << "Destructor called for student: " << stdName << endl;
    }
};

int main() {
    Student obj1;
    Student obj2("12345", "Ali Hassan");
    Student obj3("23456", "Sheraz Depp", "Computer Science");
    Student obj4(obj3);

    Student *d1 = new Student();
    Student *d2 = new Student("99999", "John Doe");
    Student *d3 = new Student(1, "Sarah Khan", "IT");

    d1->displayData();
    d2->displayData();
    d3->displayData();

    delete d1;
    delete d2;
    delete d3;

    return 0;
}
