#include <iostream>
#include <string>

using namespace std;

class Line {
	public :
		double length;
		
		Line (double l){
			length = l;
		}
};

int main (){
	
	Line line1(1233.56);
	
	cout << line1.length << endl;
	
	return 0;
}
