#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

class Rectangle {
	private:
		double length;
		double width;
	
	public:
		// mutator
		void setLength (double l) {length = l;}
		void setWidth (double w) {width = w;}
		
		//constructor
		double getWidth (){return width;}
		double getLength (){return length;}
		double getArea (){
			return width*length;
		}
};

int main(){
			 
	Rectangle kitchen, bedroom, den;
	double width, length, totalArea=0;
	
	// get value for kitchen
	cout << "Enter kitchen width: ";
	cin >>  width;
	cout << "Enter kitchen height: ";
	cin >>  length;
	// set value to the class kitchen
	kitchen.setLength(length);
	kitchen.setWidth(width);
	// add the area of the kitchen
	cout << "Area of the kitchen: " << kitchen.getArea() << endl;
	totalArea += kitchen.getArea();

	// get value for bedroom
	cout << "Enter bedroom width: ";
	cin >>  width;
	cout << "Enter bedroom length: ";
	cin >>  length;
	// set value to the class bedroom
	bedroom.setLength(length);
	bedroom.setWidth(width);
	// add the area of the bedroom
	cout << "Area of the bedroom: " << bedroom.getArea() << endl;
	totalArea += bedroom.getArea();
	
	// get value for den
	cout << "Enter den width: ";
	cin >>  width;
	cout << "Enter den length: ";
	cin >>  length;
	// set value to the class den
	den.setLength(length);
	den.setWidth(width);
	// add the area of the den
	cout << "Area of the den: " << den.getArea() << endl;
	totalArea += den.getArea();
	
	// print total area of the house
	cout << "Total area of the house : " << totalArea << endl;
	
	return 0;
}
