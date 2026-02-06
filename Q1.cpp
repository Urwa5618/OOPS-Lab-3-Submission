#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    string Name;
    int idNum;
    string Department;
    string Position;

public:
    // Default constructor
    Employee() {
        Name = "";
        idNum = 0;
        Department = "";
        Position = "";
    }

    // Parameterized constructor
    Employee(string Ename, int EId, string Edepart, string Epos) {
        Name = Ename;
        idNum = EId;
        Department = Edepart;
        Position = Epos;
    }

    // Set methods
    void setName(string Ename) { Name = Ename; }
    void setId(int EId) { idNum = EId; }
    void setDepart(string Edepart) { Department = Edepart; }
    void setEpos(string Epos) { Position = Epos; }

    // Get methods
    string getName() { return Name; }
    int getId() { return idNum; }
    string getDepartment() { return Department; }
    string getPosition() { return Position; }

    // Destructor
    ~Employee() {
        cout << "Destructor called for " << Name << endl;
    }
};

int main() {
    Employee E1, E2, E3;

    // Step 1: Initialize default data using set() methods
    E1.setName("Waleed Abbid");
    E1.setId(47899);
    E1.setDepart("Accounting");
    E1.setEpos("Vice President");

    E2.setName("Haidar Ali");
    E2.setId(39119);
    E2.setDepart("IT");
    E2.setEpos("Programmer");

    E3.setName("Nouman Khaliq");
    E3.setId(81774);
    E3.setDepart("Manufacturing");
    E3.setEpos("Engineer");

    // Display initialized data
    cout << "\n--- Initialized Employee Data ---\n";
    cout << E1.getName() << " " << E1.getId() << " " << E1.getDepartment() << " " << E1.getPosition() << endl;
    cout << E2.getName() << " " << E2.getId() << " " << E2.getDepartment() << " " << E2.getPosition() << endl;
    cout << E3.getName() << " " << E3.getId() << " " << E3.getDepartment() << " " << E3.getPosition() << endl;

    // Step 2: Input new data from user
    string name, department, position;
    int id;

    // Employee 1
    cout << "\nEnter data for Employee 1\n";
    cin.ignore();  // Ignore leftover newline before first getline
    getline(cin, name);
    cin >> id;
    cin.ignore();  // Ignore newline after reading integer
    getline(cin, department);
    getline(cin, position);

    E1.setName(name);
    E1.setId(id);
    E1.setDepart(department);
    E1.setEpos(position);

    // Employee 2
    cout << "\nEnter data for Employee 2\n";
    getline(cin, name);
    cin >> id;
    cin.ignore();
    getline(cin, department);
    getline(cin, position);

    E2.setName(name);
    E2.setId(id);
    E2.setDepart(department);
    E2.setEpos(position);

    // Employee 3
    cout << "\nEnter data for Employee 3\n";
    getline(cin, name);
    cin >> id;
    cin.ignore();
    getline(cin, department);
    getline(cin, position);

    E3.setName(name);
    E3.setId(id);
    E3.setDepart(department);
    E3.setEpos(position);

    // Step 3: Display updated data
    cout << "\n--- Employee Data After User Input ---\n";
    cout << E1.getName() << " " << E1.getId() << " " << E1.getDepartment() << " " << E1.getPosition() << endl;
    cout << E2.getName() << " " << E2.getId() << " " << E2.getDepartment() << " " << E2.getPosition() << endl;
    cout << E3.getName() << " " << E3.getId() << " " << E3.getDepartment() << " " << E3.getPosition() << endl;

    return 0;
}
