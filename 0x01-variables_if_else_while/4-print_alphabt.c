#include <stdio.h>

/**
 * main - Prints all alphabets except the letters 'q' and 'e', in lowercase
 * ASCII code.
 *
 * Return: 0 if no errors
 */

int main(void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		if (i != 101 && i != 113)
			putchar(i);
	}

	putchar(10);
	return (0);
}
