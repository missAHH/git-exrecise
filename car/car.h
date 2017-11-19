#include <iostream>
#include <stdio.h>
#include <String>

using namespace std;


class Car {
protected:
	 string make;
	 string model;
	size_t year;
	double engine_valume;
	string color;

public:
	Car( string makeC, string modelC, size_t yearC, double engine_valumeC, string colorC);
	string getMake() const;
	string getModel() const;
	size_t getYear() const;
	double getEngine_Value() const;
	string getColor() const;
	void setMake( string const makeC );
	void setModel( string const modelC );
	void setYear( size_t const yearC );
	void setEnigne_Value( double const engine_valueC );
	void setColor( string  const colorC );
	void CarsDetials() const;
	static int yearCompare(Car& Car1, Car& Car2);
	static int EngineValueCompare(Car& Car1,Car& Car2);
};
