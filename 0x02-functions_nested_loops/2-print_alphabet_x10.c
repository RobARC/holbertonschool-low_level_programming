#include "holberton.h"
/**
* print_alphabet_x10 -Entry point
*
* Return Always 0 (Success)
*/

void print_alphabet_x10(void)
{
int n;
int j;

for (j = 0; j <= 9; j++)
{

	for (n = 97; n <= 122; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}
}
