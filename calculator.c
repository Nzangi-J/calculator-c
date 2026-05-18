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

int main(void)
{
	double a,b,result;
	char operator;
	
	printf("Please enter a number: ");
	scanf("%lf",&a);
	
	printf("Please enter a number: ");
	scanf("%lf",&b);
	
	printf("Please enter an operator: ");
	scanf(" %c",&operator);

	switch(operator)
	{
		case '+':
			result = add(a,b);
			printf("Your result is: %.2lf\n",result);
			break;
		
		case '-':
                        result = subtract(a,b);
                        printf("Your result is: %.2lf\n",result);
                        break;

		case '*':
                        result = multiply(a,b);
                        printf("Your result is: %.2lf\n",result);
                        break;
		
		case '/':
                        result = divide(a,b);
                        printf("Your result is: %.2lf\n",result);
                        break;

		default:
			printf("Error: invalid operator\n");
			break;
	}



	return 0;
}
