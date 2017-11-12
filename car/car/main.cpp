#include <iostream>
#include <stdio.h>
#include <String>
#include "Car.h"

using namespace std;

int checkInput(size_t yearC,string makeC,string modelC,double engine_valumeC,string colorC)
{
	return (yearC >= 1900) && (makeC != "") && (modelC != "") && (engine_valumeC > 0) && (colorC != "" && colorC.length() <= 10);
}
void main() {
	 string  make = "",make2 = "", model = "",model2 = "" , color = "", color2 = "";
	size_t year = 0, year2 = 0;
	double engine_valume = -1, engine_valume2 = -1;

	cout << "Car 1 details' input " << endl;
	cout << "please enter the model, make , year , engine value and color of the Car" << endl;
	cin >> model >> make >> year >> engine_valume >> color;
	if (checkInput(year, make, model, engine_valume, color))
	{
		Car *car1 = new Car(model, make, year, engine_valume, color);
		cout << "Car 2 details' input " << endl;
		cout << "please enter the model, make , year , engine value and color of the Car" << endl;
		cin >> model2 >> make2 >> year2 >> engine_valume2 >> color2;
		if (checkInput(year2, make2, model2, engine_valume2, color2))
		{
			Car *car2 = new Car(model2, make2, year2, engine_valume2, color2);
			int yearC = Car::yearCompare(car1, car2);
			int engineValueC = Car::EngineValueCompare(car1, car2);
			if (yearC > 0)
				cout << "Year: car 1 greater than car2" << endl;
			else
			{
				if (yearC < 0)
					cout << "Year: car 2 greater than car 1" << endl;
				else
					cout << "Year: equal";
			}
			if (engineValueC > 0)
				cout << "Engine: car 1 greater than car 2" << endl;
			else
			{
				if (engineValueC < 0)
					cout << "Engine: car 2 greater than car 1" << endl;
				else
					cout << "Engine: equal" << endl;
			}
		}
		else
			cout << "Error" << endl;
	}
	else
		cout << "Error" << endl;
}

