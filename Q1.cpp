#include<iostream>
#include<string>
using namespace std;

class Employee{
	string Name;
	int idNum;
	string Department;
	string Position;
	
	public:
		Employee(){
			Name = "";
			idNum = 0;
			Department = "";
			Position = "";
		}
		
		Employee(string Ename, int EId, string Edepart, string Epos){
			Name = Ename;
			idNum = EId;
			Department = Edepart;
			Position = Epos;
		}
		
		void setName(string Ename){
			Name = Ename;
		}
		
		void setId(int EId){
			idNum = EId;
		}
		
		void setDepart(string Edepart){
			Department = Edepart;
		}
		
		void setEpos(string Epos){
			Position = Epos;
		}
		
		string getName(){
			return Name;
		}
		
		int getId(){
			return idNum;
		}
		
		string getDepartment(){
			return Department;
		}
		
		string getPosition(){
			return Position;
		}
	
		~Employee(){
			cout<<"I'm a destructor"<<endl;
		}
};

int main(){
	Employee E1, E2, E3;

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


	cout << "\n--- Initialized Employee Data ---\n";
	cout << E1.getName() << " " << E1.getId() << " " << E1.getDepartment() << " " << E1.getPosition() << endl;
	cout << E2.getName() << " " << E2.getId() << " " << E2.getDepartment() << " " << E2.getPosition() << endl;
	cout << E3.getName() << " " << E3.getId() << " " << E3.getDepartment() << " " << E3.getPosition() << endl;
	
	string name, department, position;
	int id;
	
	cout<<"\nEnter data for Employee 1\n";
	cin.ignore();
	getline(cin,name);
	cin>>id;
	cin.ignore();
	getline(cin,department);
	getline(cin,position);
	
	E1.setName(name);
	E1.setId(id);
	E1.setEpos(position);
	E1.setDepart(department);
	
	cout<<"\nEnter data for Employee 2\n";
	cin.ignore();
	getline(cin,name);
	cin>>id;
	cin.ignore();
	getline(cin,department);
	getline(cin,position);
	
	E2.setName(name);
	E2.setId(id);
	E2.setEpos(position);
	E2.setDepart(department);
	
	cout<<"\nEnter data for Employee 3\n";
	cin.ignore();
	getline(cin,name);
	cin>>id;
	getline(cin,department);
	getline(cin,position);
	
	E3.setName(name);
	E3.setId(id);
	E3.setEpos(position);
	E3.setDepart(department);
	
	cout << "\n--- Employee Data After User Input ---\n";
	cout << E1.getName() << " " << E1.getId() << " " << E1.getDepartment() << " " << E1.getPosition() << endl;

	cout << E2.getName() << " " << E2.getId() << " " << E2.getDepartment() << " " << E2.getPosition() << endl;

	cout << E3.getName() << " " << E3.getId() << " " << E3.getDepartment() << " " << E3.getPosition() << endl;

	return 0;
};


