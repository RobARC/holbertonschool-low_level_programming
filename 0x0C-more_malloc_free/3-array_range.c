#include<stdlib.h>
#include<stdio.h>
#include "holberton.h"
/**
 * array_range-Entry point
 * @min: is variable int
 * @max: is variable int
 *
 *  Return: Always 0.
 */
int *array_range(int min, int max)
{
int *ptr;
int i;
int n = 0;		if (min > max)
			return (NULL);

		n = max + 1;

		ptr = malloc(n * sizeof(int));

		if (ptr == NULL)
			return (NULL);

		for (i = 0; i < n; i++)
			ptr[i] = min++;
			min++;
return (ptr);
}
