#include <iostream>
#include <string>

using namespace std;

struct Weather {
	double total_rainfall;
	float high_temp;
  float low_temp;
  float average_temp;
};
void averageRainfall (double total , int months) {
  double average = total/months;

  cout << "This year average rainfall: " << average << endl;
}

void averageTemp ( double total, int months) {
  double average = total/months;

  cout << "This year average temperature: " << average << endl;
}

int main () {

  int months = 12;
  Weather weather[months];

  float getHighTemp, getLowTemp, getAverageTemp;
  float minTemp = 9999, maxTemp = 0;
  int currentMonth_min = 0, currentMonth_max = 0;
  double total_year_rainfall = 0, total_year_temp = 0;


  for(int i = 0; i < months ; i++){
    cout << "Months " << i+1 << endl;
    cout << "---------------------------" << endl;
    cout << "Enter total rainfall : ";
    cin >> weather[i].total_rainfall;

    cout << "Enter high temperature : ";
    cin >> getHighTemp;
    if (getHighTemp <= 140 && getHighTemp >= -100) {
      weather[i].high_temp = getHighTemp;
    }


    cout << "Enter low temperature  : ";
    cin >> getLowTemp;
    if (getLowTemp <= 140 && getLowTemp >= -100) {
      weather[i].low_temp = getLowTemp;
    }

    cout << "Enter average temperature : ";
    cin >> getAverageTemp;
    if (getAverageTemp <= 140 && getAverageTemp >= -100) {
      weather[i].average_temp = getAverageTemp;
    }
    cout << "---------------------------" << endl;

    // get total rainfall for whole year
    total_year_rainfall += weather[i].total_rainfall;
    // get total average rainfall for whole year
    total_year_temp += weather[i].average_temp;

    // set the highest temp month
    if (weather[i].high_temp > maxTemp){
      currentMonth_max = i+1;
      maxTemp = weather[i].high_temp;
    }

    // set the lowest temp month
    if (weather[i].low_temp < minTemp){
      currentMonth_min = i+1;
      minTemp = weather[i].low_temp;
    }
  }


  averageRainfall (total_year_rainfall, months);
  averageTemp (total_year_temp, months);

  cout << "Month with highest temp: " << currentMonth_max << " temperature: " << maxTemp << endl;
  cout << "Month with lowest temp: " << currentMonth_min << " temperature: " << minTemp << endl;



  return 0;
}


