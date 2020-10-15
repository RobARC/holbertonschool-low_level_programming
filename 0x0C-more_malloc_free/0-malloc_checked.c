#include<stdlib.h>
#include<stdio.h>
#include "holberton.h"
/**
 *  malloc_checked-Entry point
 * @b: is variable unsigned int
 *
 *  Return: Always 0.
 */
void *malloc_checked(unsigned int b)
{
void *p;

	p = malloc(b);

	if (p == NULL || p == 0)
	{
		exit(98);
	}
	else
	{
	return (p);
	}
free(p);
}
