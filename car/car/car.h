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
	void setMake( const string makeC );
	void setModel( const string modelC );
	void setYear( const size_t yearC );
	void setEnigne_Value( const double engine_valueC );
	void setColor( const string colorC );
	void CarsDetials() const;
	static int yearCompare(const Car& Car1, const Car& Car2);
	static int EngineValueCompare(const Car& Car1,const Car& Car2);
};
