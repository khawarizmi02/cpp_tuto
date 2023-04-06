#include <iostream>
#include <string>
#include <iomanip>

using namespace std;


class Student {
	private :
		string name;
		int id;
		string desasiswa;
		int year;
		int sem;
		float cgpa;
	
	public :
		// mutator
		void setName (string n){ name = n;}
		void setID (int i){ id = i;}
		void setDesasiswa (string d){ desasiswa = d;}
		void setYear (int y){ year = y;}
		void setSem (int s){ sem = s;}
		void setCGPA (float c){ cgpa = c;}
		
		// constructor
		string getName () {return name;}
		int getID () {return id;}
		string getDesasiswa () {return desasiswa;}
		int getYear () {return year;}
		int getSem () {return sem;}
		int getCGPA () {return cgpa;}
};


int main () {
	
	Student stu;
	string name, desasiswa;
	int id, year, sem;
	float cgpa;
	
	cout << "Enter name : ";
	getline(cin, name);
	cout << "Enter ID : ";
	cin >> id;
	cin.ignore();
	cout << "Enter Desasiswa : ";
	getline(cin, desasiswa);
	cout << "Enter Year : ";
	cin >> year;
	cout << "Enter Semester : ";
	cin >> sem;
	cout << "Enter CGPA : ";
	cin >> cgpa;
	
	// set the value in the mutator
	stu.setName(name);
	stu.setID(id);
	stu.setDesasiswa(desasiswa);
	stu.setYear(year);
	stu.setSem(sem);
	stu.setCGPA(cgpa);
	
	// get the value in the class
	cout << "Name : " << stu.getName() << endl; 
	cout << "ID : " << stu.getID() << endl;
	cout << "Desasiswa : " << stu.getDesasiswa() << endl;
	cout << "Year : " << stu.getYear() << endl;
	cout << "Semester : " << stu.getSem() << endl;
	cout << "CGPA : " << stu.getCGPA() << endl;
	
	return 0;
}
