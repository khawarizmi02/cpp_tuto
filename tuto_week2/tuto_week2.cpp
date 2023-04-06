#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

struct Student {
	string name;
	int ID;
	string Desasiswa;
	int Semester;
	float CGPA;
};


enum Day { MONDAY = "Monday", TUESDAY = "Tuesday", WEDNESDAY = "Wednesday", THURSDAY = "Thursday", FRIDAY = "Friday" };

int main (){
	
//	Student stu;
//	
//	
//	cout << "Enter Name: ";
//	getline(cin,stu.name);
//	cout << "Enter ID: ";
//	cin >> stu.ID;
//	cin.ignore();
//	cout << "Enter Desasiwa: ";
//	getline(cin,stu.Desasiswa);
//	cout << "Enter Semester: ";
//	cin >> stu.Semester;
//	cout << "Enter CGPA: ";
//	cin >> stu.CGPA;
	
	Student stu2[5];
	
	stu2[0].name = "ahmad";
	stu2[1].name = "ali";
	stu2[2].name = "abu";
	stu2[3].name = "zaki";
	stu2[4].name = "zakuang";
		
		for (int i = 0; i<5; i++){
			cout << stu2[i].name << endl;
		}
	
//	cout << "Name: " << stu.name << endl;
//	cout << "ID: " << stu.ID << endl;
//	cout << "Desasiswa: " << stu.Desasiswa << endl;
//	cout << "Semester: " << stu.Semester << endl;
//	cout << "CGPA: " << stu.CGPA << endl;

	Student *ptr, d;
	ptr = &d;
	
	ptr->ID = 3;
	
	cout << ptr->ID << endl;
	return 0;    
}
