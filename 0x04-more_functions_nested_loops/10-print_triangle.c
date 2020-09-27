#include "holberton.h"
/**
* print_triangle-Entry point
* @size: is a variable
* Return Always 0 (Success)
*/
void print_triangle(int size)
{
int i;
int j;
int k;
int esp = size;
	if (size > 0)
	{
	for (i = 1; i <= size; i++)
	{
		for (j = 1; j <= esp; j++)
		{
			_putchar(32);

		}
		for (k = 1; k <= i; k++)
		{
			_putchar(35);
		}
		_putchar('\n');
		esp = esp - 1;
	}
	}
	else
	{
		_putchar('\n');
	}
}





