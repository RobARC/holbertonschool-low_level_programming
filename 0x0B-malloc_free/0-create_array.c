#include "holberton.h"
#include<stdlib.h>
/**
 * create_array-Entry point
 * @size: is a variable int
 * @c: is variable char
 * @
 *  Return: Always 0.
 */
char *create_array(unsigned int size, char c)
{
unsigned int i;
char *str;

	str = malloc(size * sizeof(char));
	if (size == 0)
	{
		return (NULL);
	}
	if (size != 0)
	{
		for (i = 0; i < size; i++)
		str[i] = c;
		return (str);
	}
	else
	{
		return (NULL);
	}
}

