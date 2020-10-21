#include<stdio.h>
#include "function_pointers.h"

/**
 * array_iterator- use a pointer to a function to print na$
 * @array: pointer to the array containing the elem.
 * @size:  size of the array
 * @action: pointer to the functions
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i;

	if (action == NULL || array == NULL || size <= 0)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
