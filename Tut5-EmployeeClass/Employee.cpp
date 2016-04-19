#include "Employee.h"
#include <iostream>
using namespace std;

Employee::Employee(string HourlyName, string No,  double HourlySalary)
{
	setName(HourlyName);
	setStaffNo(No);
	setSalary(HourlySalary);
	Employee::count++;
}


Employee::~Employee(void)
{
	Employee::count--;
}

void Employee::setName(const string tempName)
{
	name = tempName;
}

string Employee::getName() const
{
	return name;
}

string Employee::getStaffNo() const
{
	return StaffNumber;
}

void Employee::setStaffNo(const string tempNo)
{
	StaffNumber = tempNo;
}

void Employee::setSalary(const double tempSalary)
{
	salary = tempSalary;
}

/*virtual function*/
double Employee::getSalary() const
{
	return salary;
}


ostream& operator<<(ostream &out, Employee& emp)
{
	out << emp.getName() << "\t" << emp.getStaffNo() << "\t" << "\t" << emp.getSalary() << endl; /*get salary is called as it might
																												 *have to perform some calculations before
																												 */
	return out;
}
