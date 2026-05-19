#include <stdio.h>
#include "math_functions.h"

int main(void)
{
	double a,b,result;
	char operator;
	char choice = 'y';

	while(choice == 'y' || choice == 'Y')
	{
		printf("\e[1;1H\e[2J"); /*clear the screen*/

		printf("Please enter a number: ");
		while (scanf("%lf", &a) != 1) 
		{
    			while (getchar() != '\n');
    			printf("\033[0;31mInvalid input. Please enter a real number:\033[0m\n");
		}
	
		printf("Please enter a number: ");
		while (scanf("%lf", &b) != 1)
                {
                        while (getchar() != '\n');
                        printf("\033[0;31mInvalid input. Please enter a real number:\033[0m\n");
                }
	
		printf("Please enter an operator: ");
		scanf(" %c",&operator);

		switch(operator)
		{
			case '+':
				result = add(a,b);
				printf("Your result is: \033[0;32m%.2lf\033[0m\n", result); /*Green for result*/
				break;
		
			case '-':
                        	result = subtract(a,b);
                        	printf("Your result is: \033[0;32m%.2lf\033[0m\n", result); /*Green for result*/
                        	break;

			case '*':
                        	result = multiply(a,b);
                        	printf("Your result is: \033[0;32m%.2lf\033[0m\n", result); /*Green for result*/
                        	break;
		
			case '/':
                        	result = divide(a,b);
                        	printf("Your result is: \033[0;32m%.2lf\033[0m\n", result); /*Green for result*/
				break;

			default:
				printf("\033[0;31mError: invalid operator\033[0m\n"); /*Red for error*/
				break;
		}

		printf("\nDo you want to perform another calculation? (Y/N): ");
		scanf(" %c",&choice);
	}

	printf("Goodbye!\n");


	return 0;
}
