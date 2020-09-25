#include "holberton.h"
/**
* print_diagonal-Entry point
* @n: is a variable
* Return Always 0 (Success)
*/
void print_diagonal(int n)
{
int j;
int i;
char d = '\\';
char e = 32;
for (j = 1; j <= n; j++)
{
	for (i = 1; i <= j; i++)
	{
		_putchar(e);

	}
_putchar(d);
_putchar('\n');
}
_putchar('\n');
}

