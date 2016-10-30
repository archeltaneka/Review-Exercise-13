#ifndef PAYROLL_H
#define PAYROLL_H

// creates Payroll class
class Payroll{
	private:
		int numHoursWorked;
		double hourlyPayRate;
		double totalPay;
	public:
		// default constructor
		Payroll()
		{
			numHoursWorked = 0;
			hourlyPayRate = 0.0;
			totalPay = 0.0;
		}
		// set number of hours worked
		void setNumHoursWorked(int numHours)
		{
			numHoursWorked = numHours;
		}
		// set hourly pay rate for each employee
		void setHourlyPayRate(double pay)
		{
			hourlyPayRate = pay;
		}
		// set total pay
		void setTotalPay(double total)
		{
			totalPay = total;
		}
		// get number of hours worked
		int getNumHoursWorked() const
		{
			return numHoursWorked;
		}
		// get hourly pay rate
		double getHourlyPayRate() const
		{
			return hourlyPayRate;
		}
		// get total pay
		double getTotalPay() const
		{
			return numHoursWorked * hourlyPayRate;
		}
	
};

#endif
