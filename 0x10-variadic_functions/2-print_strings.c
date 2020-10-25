#include<stdio.h>
#include<stdlib.h>
#include<stdarg.h>
#include "variadic_functions.h"

/**
* print_strings - add the value of the list of parameters
* @n: numbers to add
* @...: arguments
* @separator: string to be printed between numbers
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
char *str;

	va_list s1;

	va_start(s1, n);

	for (i = 0; i < n; i++)
	{
		if (s1 == NULL)
		{
			printf("%s", "nil");
		}
		else
		{
			if (separator == NULL || i == (n - 1))
			{
				str = va_arg(s1, char *);
				printf("%s", str);
			}
			else
			{
				str = va_arg(s1, char *);
				printf("%s%s", str, separator);
			}
		}
	}
	printf("\n");
}

