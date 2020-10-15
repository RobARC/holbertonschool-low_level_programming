#include<stdlib.h>
#include<stdio.h>
#include "holberton.h"
/**
 *  alloc_grid-Entry point
 * @width: is variable int
 * @height: is a variable
 *  Return: Always 0.
 */
int **alloc_grid(int width, int height)
{

	int **grid;
	int i;
	int j;

	if (width <= 0 || height <= 0)
		return (NULL);
	grid = malloc(height * sizeof(int *));

	if (grid == NULL)

		return (NULL);


	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));



		if (grid[i] == NULL)
		{
			for  (i = 0; i < height; i++)
			{
				free(grid[i]);
			}

			return (NULL);

		}
		for (j = 0; j <  width; j++)
			grid[i][j] = 0;

	}

	return (grid);
	free(grid);
}
