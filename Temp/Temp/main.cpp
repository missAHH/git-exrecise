#include <iostream>
#include<string>
#include "Celsius.h"
#include "Fahrenheit.h"

ostream& operator<<(ostream& os, const Fahrenheit& fah) {
	return os << "Fahrenheit:"<<endl << "Boiling point: " << fah.getBoilingPoint() << endl
		<< "Freezing point: " << fah.getFreezingPoint() << endl
		<< "Absolutr zero: " << fah.getAbsolueZero() << endl;
}
ostream& operator<<(ostream& os, const Celsius& cell) {
	return os << "Celsius:"<<endl << "Boiling point: " << cell.getBoilingPoint() << endl
		<< "Freezing point: " << cell.getFreezingPoint() << endl
		<< "Absolutr zero: " << cell.getAbsolueZero() << endl;
}


void main() {
	Fahrenheit *fah = new Fahrenheit(40, -10.5, 2);
	cout << (*fah);
	Celsius *cel = new Celsius(*fah);
	cout << (*cel);
	Celsius *cel1 = new Celsius(40, -10.5, 2);
	cout << (*cel1);
	Fahrenheit *fah1 = new Fahrenheit(*cel1);
	cout << (*fah1);

}