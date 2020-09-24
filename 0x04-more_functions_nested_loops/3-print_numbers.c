#include "holberton.h"
/**
* print_numbers -Entry point
*
* Return Always 0 (Success)
*/
void print_numbers(void)
{
int j;
int i;
i = 48;
for (j = 0; j <= 9; j++)
{
_putchar(i);
i++;
}
_putchar('\n');

}
