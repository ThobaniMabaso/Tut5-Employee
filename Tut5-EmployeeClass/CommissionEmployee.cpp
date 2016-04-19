#include "Commission.h"
#include <iostream>
using namespace std;


Commission::Commission(string HourlyName, string No,  double HourlySalary, double sls) : Employee(HourlyName, No,  HourlySalary)
{
	setSales(sls);
}


Commission::~Commission(void)
{
}

void Commission::setSales(const double s)
{
	sales = s;
}
double Commission::getSales() const
{
	return sales;
}

/*overrieds*/
double Commission::getSalary()
{
	return salary + (0.015 * sales);
}


ostream& operator<<(ostream &out, Employee& emp)
{
out << emp.getName() << "\t" << emp.getEmpNo() << "\t" << emp.getTitle() << "\t" << emp.getSalary() <<endl; /*get salary is called as it might
*have to perform some calculations before

return out;
}
