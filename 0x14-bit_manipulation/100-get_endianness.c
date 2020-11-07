#include <stdio.h>
#include "holberton.h"
/**
* get_endianness - Function check_for_endianness() returns 1, if architecture
* is little endian, 0 in case of big endian
* Return: an integer 1 or 0.
*/
int get_endianness(void)
{
	unsigned int x = 1;

	char *c = (char *) &x;

	return (*c);
}
