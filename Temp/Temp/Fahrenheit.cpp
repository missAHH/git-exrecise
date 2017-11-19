#include<iostream>
#include<string>
#include "Fahrenheit.h"
#include "Celsius.h"

using namespace std;

Fahrenheit::Fahrenheit(const double boiling, const double freezing, const double absolute) :boiling_point(boiling),
freezing_point(freezing), absoulte_zero(absolute)
{}
Fahrenheit::Fahrenheit(const Celsius & cel) {
	boiling_point = (cel.getBoilingPoint() * 1.8) + 32;
	freezing_point = (cel.getFreezingPoint() * 1.8) + 32;
	absoulte_zero = (cel.getAbsolueZero() * 1.8) + 32;
}
double Fahrenheit::getBoilingPoint()const
{
	return boiling_point;
}
double Fahrenheit::getFreezingPoint()const
{
	return freezing_point;
}
double Fahrenheit::getAbsolueZero()const
{
	return absoulte_zero;
}
void Fahrenheit::setBoilingPoint(const double boiling)
{
	boiling_point = boiling;
}
void Fahrenheit::setFreezingPoint(const double freezing)
{
	freezing_point = freezing;
}
void Fahrenheit::setAbsolueZero(const double absolute)
{
	absoulte_zero = absolute;
}
