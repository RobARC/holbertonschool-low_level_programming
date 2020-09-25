#include "holberton.h"
/**
* print_alphabet_x10 -Entry point
*
* Return Always 0 (Success)
*/

void more_numbers(void)
{
int n;
int j;


for (j = 0; j <= 9; j++)
{

        for (n = 0; n <= 14; n++)
        {
		if ( n > 9)
		{
		  _putchar ((n/10)+'0');
		}
          _putchar((n%10)+'0'); 
        }
        _putchar('\n');
}
}

