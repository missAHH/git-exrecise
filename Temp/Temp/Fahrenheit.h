#include<iostream>
#include<string>

class Celsius;
using namespace std;

class Fahrenheit {
protected:
	double boiling_point;
	double freezing_point;
	double absoulte_zero;
public:
	Fahrenheit(const double boiling, const double freezing, const double absolute);
	explicit Fahrenheit(const Celsius &cel);
	double getBoilingPoint()const;
	double getFreezingPoint()const;
	double getAbsolueZero()const;
	void setBoilingPoint(const double boiling);
	void setFreezingPoint(const double freezing);
	void setAbsolueZero(const double absolute);
};
