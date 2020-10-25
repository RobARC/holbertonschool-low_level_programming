#include<stdio.h>
#include<stdarg.h>
#include "variadic_functions.h"
/**
* sum_them_all - add the value of the list of parameters
* @n: numbers to add
* @...: arguments
* Return: addition of the list of numbers
*/
int sum_them_all(const unsigned int n, ...)
{
unsigned int i, sum;

	if (n > 0)
	{
		va_list num;

		va_start(num, n);

		sum = 0;
		for (i = 0; i < n; i++)
			sum += va_arg(num, unsigned int);
		va_end(num);
		return (sum);
	}
	return (0);
}

