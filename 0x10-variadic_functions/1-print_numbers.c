#include<stdio.h>
#include<stdlib.h>
#include<stdarg.h>
#include "variadic_functions.h"

/**
* print_numbers - print all the numbers of the function, follow by a new line
* @separator: string to be printed between numbers
* @n: number of arguments
*
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;
int numbers;


	if (separator == NULL)
	{
		exit(0);
	}
	else
	{
		va_list n1;

		va_start(n1, n);

		for (i = 0; i < n; i++)
		{
			if (i == (n - 1))
			{
				numbers = va_arg(n1, int);
				printf("%d",  numbers);
			}
			else
			{
				numbers = va_arg(n1, int);
				printf("%d%s", numbers, separator);
			}
		}
		va_end(n1);
	}

	printf("\n");
}


