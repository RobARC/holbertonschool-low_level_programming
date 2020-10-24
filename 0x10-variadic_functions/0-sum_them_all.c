#include<stdio.h>
#include<stdarg.h>
#include "variadic_functions.h"

/**
*
* sum_them_all - add the value of the list of parameters
* @n: numbers to add
* @...: arguments
* Return: addition of the list of numbers
*/

int sum_them_all(const unsigned int n, ...)

{
unsigned int i, sum;

if (n == 0)
{
	return (0);
}
else
{
	va_list list;
	va_start(list, n);
	sum = 0;
	for(i = 0; i < n; i++)
	{
		sum += va_arg(list, int);
	}
	va_end(list);

}

return (sum);

}
