#include <stdio.h>
#include "holberton.h"

/**
 * clear_bit - function that sets the value of a bit to 0 at a given index
 * @n: number to check
 * @index:position to change
 * Return: 1 in case of exit or -1 it is failed
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 128)
		return (-1);

	*n = (~(1 << index) & *n);
	return (1);
}

