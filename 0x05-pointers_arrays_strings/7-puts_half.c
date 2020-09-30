#include "holberton.h"
/**
 * puts_half-Entry point
 * @str: is a pointer
 *
 * Return: Always 0.
 */
void puts_half(char *str)
{
int x, n, x2;

	for (x = 0; str[x] != '\0'; x++)
	{
	}
		if (x % 2 == 0)
		{
			n =  x / 2;
		}
		else
		{
			n = (x + 1) / 2;
		}

		x2 = x - n;

		for (; str[x2] != '\0'; x2++)
		{
			_putchar(str[x2]);
		}

_putchar('\n');
}
