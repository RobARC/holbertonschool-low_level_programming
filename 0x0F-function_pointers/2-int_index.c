#include<stdio.h>
#include "function_pointers.h"

/**
 * int_index- searches for an integer
 * @array: pointer to the array containing the integers.
 * @size:  size of the array
 * @cmp: pointer to the functions
 * Return: -1 if fails, index of the found integer.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;

	if  (array == NULL || size <= 0 || cmp == NULL)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
