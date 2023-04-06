#include <iomanip>
#include <iostream>
#include <string>

using namespace std;

struct MovieData {
	string title;
	string director;
	int year_release;
	int time;
};

int main (){
	
	int movie_num = 2;
	MovieData movie[movie_num];
	
	// Input data into the data struct
	for(int i = 0; i < movie_num; i++){
		cout << "Enter movie name : ";
		getline(cin, movie[i].title);
		cout << "Enter movie's director' : ";
		getline(cin, movie[i].director);
		cout << "Enter movie year release : ";
		cin >> movie[i].year_release;
		cout << "Enter movie running time : ";
		cin >> movie[i].time;
		cin.ignore();
	}
	
	for(int j = 0; j < movie_num; j++){
		cout << "Movie title: " << movie[j].title << endl;
		cout << "Movie director: " << movie[j].director << endl;
		cout << "Movie year release: " << movie[j].year_release << endl;
		cout << "Movie running time: " << movie[j].time << endl;
	}
	
	
	return 0;
}
