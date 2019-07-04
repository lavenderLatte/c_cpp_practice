/*  Lab 3 - Change Counter 

	Hana Ra
	CIS054 C/C++ Programming
*/

#include <stdio.h>

// constants 
#define QUARTER 0.25
#define DIME 0.10
#define NICKEL 0.05
#define PENNY 0.01

int main(int argc, char* argv[])
{
	int numQuarter;
	int numDime;
	int numNickel;
	int numPenny;
	double sum;
	int flag = 1;

	printf ("|*|*|*|*|*| Change Counting Helper |*|*|*|*|*|\n\n");

	// inputs: number of changes
	printf ("Number of QUARTERS? ");
	// numQuarter = (double) scanf ("%d", &numQuarter);  // this is wrong approach scanf returns 1 for valid input
	// double numQuarterDbl = (double) numQuarter;       // if I want to cast it, this is the right way
	flag = scanf ("%d", &numQuarter);
	// printf ("Q: %d\n", numQuarter);                   // for debugging

	printf ("Number of DIMES? ");
	flag = scanf ("%d", &numDime);

	printf ("Number of NICKELS? ");
	flag = scanf ("%d", &numNickel);

	printf ("Number of PENNIES? ");
	flag = scanf ("%d", &numPenny);

	// calculation
	sum = ((double) numQuarter)*QUARTER + (double) numDime*DIME + (double) numNickel*NICKEL + (double) numPenny*PENNY;

	printf ("\nYour total is $%0.2lf\n", sum);

	return flag;

}