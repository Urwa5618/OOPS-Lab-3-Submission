#include <iostream>
#include <cstring>
using namespace std;

class StudentRecord {
private:
    int rollNo;
    char* name;
    float gpa;

public:
    
    StudentRecord() {
        rollNo = 0;
        gpa = 0.0;
        name = new char[20];
        strcpy(name, "Unknown");
        cout << "Default constructor called\n";
    }

    
    StudentRecord(int r, const char* n, float g) {
        rollNo = r;
        gpa = g;
        name = new char[strlen(n) + 1];
        strcpy(name, n);
        cout << "Overloaded constructor called\n";
    }

    
    StudentRecord(const StudentRecord& obj) {
        rollNo = obj.rollNo;
        gpa = obj.gpa;
        name = new char[strlen(obj.name) + 1];
        strcpy(name, obj.name);
        cout << "Copy constructor called\n";
    }

    
    void inputData() {
        cout << "Enter roll number: ";
        cin >> rollNo;

        cout << "Enter GPA: ";
        cin >> gpa;

        cin.ignore();
        char temp[100];
        cout << "Enter name: ";
        cin.getline(temp, 100);

        delete[] name;
        name = new char[strlen(temp) + 1];
        strcpy(name, temp);
    }

    
    void displayData() const {
        cout << "Roll No: " << rollNo << ", Name: " << name << ", GPA: " << gpa << endl;
    }

    
    void setName(const char* n) {
        delete[] name;
        name = new char[strlen(n) + 1];
        strcpy(name, n);
    }

   
    ~StudentRecord() {
        delete[] name;
        cout << "Destructor called\n";
    }
};

int main() {
    
    StudentRecord* students = new StudentRecord[3];

    
    cout << "\nObject at index 0:\n";
    students[0].displayData();

    
    students[1] = StudentRecord(101, "Alice", 3.8);

    
    students[2] = StudentRecord(students[1]);

    
    students[2].setName("Bob");

    
    cout << "\nDisplaying all student records:\n";
    for (int i = 0; i < 3; i++) {
        students[i].displayData();
    }


    delete[] students;

    return 0;
}