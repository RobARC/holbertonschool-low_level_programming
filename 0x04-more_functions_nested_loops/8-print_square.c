#include "holberton.h"
/**
* print_square-Entry point
* @size: is a variable
* Return Always 0 (Success)
*/
void print_square(int size)
{
int j;
int i;
char d = 35;
	if (size > 0)
	{
		for (i = 0; i <= (size - 1); i++)
		{
			for (j = 0; j <= (size - 1); j++)
			{
				_putchar(d);
			}
			_putchar(d);
			_putchar('\n');
		}
	}
	else
	{
	_putchar('\n');
	}

}
