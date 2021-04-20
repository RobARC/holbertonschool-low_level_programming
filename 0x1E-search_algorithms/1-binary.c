#include "search_algos.h"

/**
* binary_search - function that searches for a value in an array of integers
* @array: Pointer to first element of the array
* @size: Number of elements in the array
* @value: Value to search
* Return: The index found or -1 if failed
*/

int binary_search(int *array, size_t size, int value)
{
	int i, mid;
	int right, left;
		if (array == NULL)
			return (-1);

	left = 0;
	right = size - 1;

	while (left <= right)
	{

		printf("Searching in array: ");

		for (i = left; i <= right - 1; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		mid = (left + right) / 2;

		if (array[mid] == value)
			return (value);

		if (array[mid] > value)
		{
			right = mid - 1;
		}
		else
		{
			left = mid + 1;
		}
	}
	return (-1);
}
