#pragma once
#include "Employee.h"
#include <string>
using namespace std;

class Hourly : public Employee
{
private:
	int hours;
	float hourly_rate;

public:
	Hourly(string HourlyName, string No, double HourlySalary, int hrs, float rte);
	~Hourly(void);

	void setHours(const int hrs);
	int getHours() const;
	void setHourlyRate(const float hrate);
	float getHourlyRate() const;

	/*overrides*/
	virtual double getSalary();

	//ostream& operator<<(ostream&);
};

