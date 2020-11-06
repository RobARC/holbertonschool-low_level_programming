#include <stdio.h>
#include "holberton.h"

/**
 * set_bit - function that sets the value of a bit to 1 at a given index
 * @n: number to check
 * @index:position to change
 * Return: 1 in case of exit or -1 it is failed
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 128) /* index limit */
		return (-1);

	*n = ((1 << index) | *n); /* shift one bit to the left */
	return (1);
}
