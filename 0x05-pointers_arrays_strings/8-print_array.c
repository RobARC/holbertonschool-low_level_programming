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
int i;
	for (i = 0; i < n; i++)
	{
		if (a[i]  == a[ n - 1])
		{
			printf("%d ", a[i]);
		}
		else
		{
			printf("%d, ", a[i]);
		}
	}
	printf("\n");
}
