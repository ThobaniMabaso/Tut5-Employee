#include <iostream>
#include <cstdlib>
#include "Employee.h"
#include "HourlyEmployee.h.h"
#include "CommissionEmployee.h"

using namespace std;

int Employee::count = 0;

int main(int args, char * argv[])
{
	Employee *emp = new Employee("John", "JN20122013", "Stuff", 50000);
	

	cout << *emp << endl;
	


	system("pause");
	return 0;
}