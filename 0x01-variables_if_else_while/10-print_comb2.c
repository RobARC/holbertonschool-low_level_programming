#include <stdio.h>

/**
* main - print numbers from 00 to 99
*
* Return: 0 (Success)
*/
int main(void)
{
int a;
int b;
a = 0;

	while (a <= 9)
	{
		b = 0;
		while (b <= 9)
		{
			putchar('0' + a);
			putchar('0' + b);
			if (a != 9 || b != 9)
			{
				putchar(',');
				putchar(' ');
			}
		b++;
		}
		a++;
	}
	putchar('\n');
	return (0);
}

