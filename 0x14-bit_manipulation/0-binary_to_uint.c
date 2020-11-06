#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * binary_to_uint - check the code for Holberton School students.
 * @b: variable pointer recived
 * Return: deci
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int deci = 0;
int i = 0;
int lenght = 0;
int base = 1;



	if (b == NULL) /*if pointer is NULL return 0 */
	{
		return (0);
	}

	while (b[lenght] != '\0') /* to find lenght */
	{
		lenght++;
	}

	for (i = lenght - 1; i >= 0; i--) /* traverse the string */
	{
		if (b[i] == '1' || b[i] == '0') /* looking for 1 and 0 only */
		{

			if (b[i] == '1') /* if equal to one add the decimal number */
			{
				deci += base;
			}
			base = base * 2; /* increase the power two by two */
		}
		else
		{
			return (0);
		}
	}
	return (deci);
}
