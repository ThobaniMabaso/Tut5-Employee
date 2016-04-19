#pragma once

#include "Employee.h"
#include <string>
using namespace std;


class Commission :public Employee
{
private:
	double sales;
public:
	Commission(string tempName, string No, double tempSalary, double sls);
	~Commission(void);

	/*additionals*/
	void setSales(const double s);
	double getSales() const;

	/*overrieds*/
	virtual double getSalary();

	//friend ostream& operator<<(ostream&, Employee&);
};

