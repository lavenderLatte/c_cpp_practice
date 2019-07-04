/*  Lab 4  - Electric Bill

	Hana Ra
	CIS054 C/C++ Programming
*/

#include <stdio.h>

#define basePrice 0.27 // name for Constants should always be in CAPITAL!!
#define extraPrice 0.55

int main(int argc, char* argv[])
{
	/* Description: 
		1) Read the number of kWh used by the customer
		2) compute the Electric Bill with a lower rate for the baseline kWh and a higher rate for kWh over the baseline
		3) display the Electric Bill

	Input: kWh
	Output: Electric_Bill
	*/

	// variables
	double usedKwh;
	double baseKwh = 500.00;
	double extraKwh;
	double electricBill;
	int flag;

	printf("Enter the amount of kWh used: ");
	flag = scanf ("%lf", &usedKwh); // even if user inputs is in integer, due to the formatting, the value will be stored as a double. 

	// test input validity
	if (flag == 0)
	{
		printf("Invalid input. Please enter the amount in number.\n");
		return 0;		
	}
	if (usedKwh < 0)
	{
		printf("The amount should be positive number.\n");
		return 0;
	}

	// calculate the final electric bill with valid input
	if (usedKwh < baseKwh)
	{
		electricBill = usedKwh * basePrice;
	}
	else
	{
		extraKwh = usedKwh - baseKwh;
		electricBill = (baseKwh * basePrice) + (extraKwh * extraPrice);
	}

	printf ("Your total electric bill for this month is $%.2lf\n", electricBill);
	return 1;
}
