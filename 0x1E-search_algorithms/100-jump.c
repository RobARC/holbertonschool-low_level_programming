#include<math.h>
#include "search_algos.h"

/**
* jump_search - searches for a value in a sorted array of integers
* using the Jump search algorithm
* @array: array of integers
* @size: size of array
* @value: value at be searched
* Return: index of value searched or -1 if it doesn't exist
*/

int jump_search(int *array, size_t size, int value)
{
	size_t max = sqrt(size);
	size_t i = 0;
	size_t min = 0;

	if (array == NULL)
		return (-1);

	printf("Value checked array[0] = [%d]\n", array[0]);
	for (i = 0; array[max] < value && max < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", max, array[max]);
		min = max;
		max = max + sqrt(size);
		if (min >= size)
			return (-1);
	}

	printf("Value found between indexes [%ld] and [%ld]\n", min, max);
	while (array[min] <= value && min < size)
	{
		printf("Value checked array[%ld] = [%d]\n", min, array[min]);
		min++;
		if (array[min] == value)
		{
			printf("Value checked array[%ld] = [%d]\n", min, array[min]);
			return (min);
		}

	}

	return (-1);

}
