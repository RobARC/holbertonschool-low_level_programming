#include "holberton.h"
/**
  * _sqrt_recursion-Entry point
 * @n: is a variable int
 * @cont: is a variable int
 *  Return: Always 0.
 */
int comp(int n, int cont);
int _sqrt_recursion(int n)
{
	if (n == 0)
	{
		return (0);
	}
	else if (n == 1)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (comp(n, 1));
	}
}

/**
 * comp-Entry poi
 * @n: is a variable int
 * @cont: is a variable int
 *  Return: Always 0.
 */

int comp(int n, int cont)
{
	if (n == (cont * cont))
	{
		return (cont);
	}
	else if (n > (cont * cont))
	{
		return (comp(n, cont + 1));
	}
	else
		return (-1);
}
