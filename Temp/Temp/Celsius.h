#include<iostream>
#include<string>

class Fahrenheit;
using namespace std;

class Celsius {
protected:
	double boiling_point;
	double freezing_point;
	double absoulte_zero;
public:
	Celsius(const double boiling, const double freezing, const double absolute);
	explicit Celsius(const Fahrenheit &fah);
	double getBoilingPoint()const;
	double getFreezingPoint()const;
	double getAbsolueZero()const;
	void setBoilingPoint(const double boiling);
	void setFreezingPoint(const double freezing);
	void setAbsolueZero(const double absolute);
};