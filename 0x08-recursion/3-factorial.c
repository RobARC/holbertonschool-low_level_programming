#include "holberton.h"
/**
 * factorial-Entry point
 * @n: is a variable int
 * @
 * @
 *  Return: Always 0.
 */
int factorial(int n)
{
	if (n == 0)
	return (1);
	if (n < 0)
	return (-1);
	else
	return (n * factorial(n - 1));



}
