#include <stdio.h>

double add(double a, double b)
{
	/* This function takes two numbers a, b and add them */
	return a + b;
}

double subtract(double a, double b)
{
	/* This function takes two numbers a, b and subtract them */
	return a - b;
}

double multiply(double a, double b)
{
	/* This funtion takes two numbers a, b and multiply them */
	return a * b;
}

double divide(double a, double b)
{
	/* This function takes two numbers a, b and divide them */
	if (b==0)
	{
		printf("Impossible to divide by zero");
		return 0.0;
	}
	return a / b;
}

