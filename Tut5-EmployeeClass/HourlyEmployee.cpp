#include "Hourly.h"
#include <iostream>
using namespace std;

Hourly::Hourly(string HourlyName, string No, double HourlySalary, int hrs, float rte) : Employee(HourlyName, No,  HourlySalary)
{
	setHours(hrs);
	setHourlyRate(rte);
}


Hourly::~Hourly(void)
{
}

void Hourly::setHours(const int hrs)
{
	hours = hrs;
}

int Hourly::getHours() const
{
	return hours;
}

void Hourly::setHourlyRate(const float hrate)
{
	hourly_rate = hrate;
}

float Hourly::getHourlyRate() const
{
	return hourly_rate;
}

/*overrides*/
double Hourly::getSalary()
{
	return hours * hourly_rate;
}

/*
ostream& Temp:: operator<<(ostream& out)
{
out << name << "\t" << empNumber << "\t" << title << "\t" << getSalary() <<endl; /*get salary is called as it might
*have to perform some calculations before

return out;
}
*/