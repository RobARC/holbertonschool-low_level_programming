#include "holberton.h"

void print_number_recursive(unsigned int n);

/**
 * print_number - Prints an integer.
 * @n: Integer to be printed.
 *
 * Return: void.
 */

void print_number(int n)
{
	unsigned int i;

	if (n < 0)
	{
		_putchar('-');
		i = -n;
	}
	else
	{
		i = n;
	}
}

