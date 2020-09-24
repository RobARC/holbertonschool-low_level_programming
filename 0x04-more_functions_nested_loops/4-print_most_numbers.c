#include "holberton.h"
/**
* print_most_numbers -Entry point
*
* Return Always 0 (Success)
*/
void print_most_numbers(void)
{
int j;
int i;
i = 48;
	for (j = 0; j <= 7; j++)

	{
	_putchar(i);
		if (i == 49)
		{
		i++;
		}
		if (i == 51)
		{
		i++;
		}
	i++;
	}
_putchar('\n');
}

