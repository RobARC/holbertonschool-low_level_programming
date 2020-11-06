#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * print_binary - Write a function that prints a  binary number.
 * @n: variable unsigned long int.
 *
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		print_binary(n >> 1); /*  recurtion with bit mamipulation */
	}
	_putchar((n & 1) + '0'); /*to print number to number*/
}
