#include "holberton.h"
/**
* print_line -Entry point
* @n: is a variable
* Return Always 0 (Success)
*/
void print_line(int n)
{
int j;
char d = '_';

for (j = 0; j <= n; j++)
{

_putchar(d);
}
_putchar('\n');
}
