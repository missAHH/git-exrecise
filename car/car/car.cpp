#include <iostream>
#include <stdio.h>
#include <String>
#include "Car.h"

using namespace std;

Car::Car(string makeC, string modelC, size_t yearC, double engine_valumeC, string colorC)
{
	year = (yearC >= 1900) ? yearC : 1900;
	make = (makeC != "") ? makeC : "Ford";
	model = (modelC != "") ? modelC : "Focus";
	engine_valume = (engine_valumeC > 0) ? engine_valumeC : 1600;
	color = (colorC != "" && colorC.length() <= 10) ? colorC : "white";
}
string Car::getMake() const {
	return Car::make;
}
string Car::getModel() const {
	return Car::model;
}
size_t Car::getYear() const {
	return Car::year;
}
double Car::getEngine_Value() const {
	return Car::engine_valume;
}
string Car::getColor() const {
	return Car::color;
}
void Car::setMake( string const makeC ) {
	Car::make = (makeC != "") ? makeC : Car::make;
}
void Car::setModel(string const modelC) {
	Car::model = (modelC != "") ? modelC : Car::model;
}
void Car::setYear(size_t const yearC) {
	Car::year = (yearC >= 1900) ? yearC : 1900;
}
void Car::setEnigne_Value(double const engine_valueC) {
	Car::engine_valume = (engine_valueC > 0) ? engine_valueC : Car::engine_valume;
}
void Car::setColor(string const colorC) {
	Car::color = (colorC != "") ? colorC : Car::color;
}
void Car::CarsDetials() const {
	cout << "model: " << Car::model << "make: " << Car::make << endl << "year: " << Car::year <<
		"engine value: " << Car::engine_valume << "color: " << Car::color << endl;
}
int Car::yearCompare(const Car* car1, const Car* car2) {
	size_t yearCar1 = car1->getYear(), yearCar2 = car2->getYear();
	if (car1 == NULL || car2 == NULL) {
		cout << " one of the Cars isn't initialized" << endl;
		return -1;
	}

	if (yearCar1 == yearCar2)
		return 0;

	return yearCar1 > yearCar2 ? 1 : -1;
}
int Car::EngineValueCompare(const Car* car1, const Car* car2) {

	double eCar1 = car1->getEngine_Value(), eCar2 = car2->getEngine_Value();
	if (car1 == NULL || car2 == NULL) {
		cout << " one of the Cars isn't initialized" << endl;
		return -1;
	}

	if (eCar1 == eCar2)
		return 0;

	return eCar1 > eCar2 ? 1 : -1;

}