#include<stdio.h>
#include<stdlib.h>
#include<stdarg.h>
#include "variadic_functions.h"
/**
* print_all - add the value of the list of parameters
* @format: arguments
*/
void print_all(const char * const format, ...)
{
va_list list;
int i = 0;
char *ptr;
	if (format != NULL)
	{
		va_start(list, format);
		while (format[i] != '\0')
		{
			switch (format[i])
			{
			case 'c':
				printf("%c", va_arg(list, int));
				break;
			case 'i':
				printf("%d", va_arg(list, int));
				break;
			case 'f':
				printf("%f", va_arg(list, double));
				break;
			case 's':
				ptr = va_arg(list, char *);
				if (ptr == NULL)
				{
					printf("(nil)");
					break;
				}
				printf("%s", ptr);
				break;
			default:
			i++;
			continue;
			}
			if (format[i + 1] != '\0')
				printf(", ");
			i++;
		}
	}
	va_end(list);
	printf("\n");
}
