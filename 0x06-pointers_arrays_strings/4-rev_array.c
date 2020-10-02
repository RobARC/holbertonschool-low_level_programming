#include "holberton.h"
#include <stdio.h>
/**
 * *reverse_array-Entry point
 * @a: is a variable pointer
 * @n: is a variable
 * @
 *  Return: Always 0.
 */
void reverse_array(int *a, int n)
{
	int i, b, e;

	n = n - 1;
	for (i = 0; i <= n; i++)
	{
		b = a[i];
		e = a[n];

		a[i] = e;
		a[n] = b;
		n--;
	}
}
