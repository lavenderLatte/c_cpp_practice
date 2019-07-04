/*  Lab 1 - Paycheck

	Hana Ra
	CIS054 C/C++ Programming

	Inputs: hours, pay rate
	Output: paycheck
*/

#include <stdio.h>           // header file: defines core input and output functions

// define the constants 
#define OVERTIME_RATE 1.5    // one and a half for over time
#define TAX_RATE 0.17        // 0.17 is 17%

int main (int argc, char* argv[]) //???
{
	// variables
	double hours;
	double payRate;
	double regHours;
	double overtimeHours;
	double regPay;
	double overtimePay;
	double grossPay;
	double taxes;
	double netPay;

	// input: hours
	printf ("Enter the hours worked: ");
	scanf ("%lf", &hours);  // scanf: reads formatted input from stdin
	                        // %lf: scan as a double floating-point number, format 
							// &hours: memory pointer

	// input: payRate
	printf ("Enter the pay rate: ");
	scanf ("%lf", &payRate);

	// compute the regular and overtime hours	
	if (hours <= 40.0)
	{
		regHours = hours;
		overtimeHours = 0.0;
	}
	else
	{
		regHours = 40.0;
		overtimeHours = hours - 40.0;
	}

	// compute the paycheck
	regPay = regHours * payRate;
	overtimePay = overtimeHours * payRate * OVERTIME_RATE;
	grossPay = regPay + overtimePay;
	taxes = grossPay * TAX_RATE;
	netPay = grossPay - taxes;

	// output 
	printf ("your pay before tax is $%.2lf\n", grossPay);
	printf ("your taxes are $%.2lf\n", taxes);
	printf ("your net pay is $%.2lf\n\n", netPay);

	return 0;

}
