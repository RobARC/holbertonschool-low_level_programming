#include "holberton.h"
#include<stdio.h>
/**
 * print_array-Entry point
 * @a: is a pointer
 * @n: is a variable
 * Return: Always 0.
 */
void print_array(int *a, int n)
{
	for (n = 0; n < 5; n++)
	{
		if (n  == 4)
		{
			printf("%d ", a[n]);
		}
		else
		{
			printf("%d, ", a[n]);
		}
	}
	printf("\n");
}
