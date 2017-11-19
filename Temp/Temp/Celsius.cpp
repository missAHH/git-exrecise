#include<iostream>
#include<string>
#include "Celsius.h"
#include "Fahrenheit.h"

using namespace std;

Celsius::Celsius(const double boiling, const double freezing, const double absolute) :boiling_point(boiling),
freezing_point(freezing), absoulte_zero(absolute)
{}

Celsius::Celsius(const Fahrenheit & fah) {
	boiling_point = (5 / 9.0)*(fah.getBoilingPoint() - 32);
	freezing_point = (5 / 9.0)*(fah.getFreezingPoint() - 32);
	absoulte_zero = (5 / 9.0)*(fah.getAbsolueZero() - 32);
}
double Celsius::getBoilingPoint()const
{
	return boiling_point;
}
double Celsius::getFreezingPoint()const
{
	return freezing_point;
}
double Celsius::getAbsolueZero()const
{
	return absoulte_zero;
}
void Celsius::setBoilingPoint(const double boiling)
{
	boiling_point = boiling;
}
void Celsius::setFreezingPoint(const double freezing)
{
	freezing_point = freezing;
}
void Celsius::setAbsolueZero(const double absolute)
{
	absoulte_zero = absolute;
}
