#include <stdio.h>

/**
 * main - Prints all alphabets except the letters in lowercase
 * and uppercase using ASCII code.
 *
 * Return: 0 if no errors
 */

int main(void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		putchar(i);
	}

	for (i = 65; i < 91; i++)
	{
		putchar(i);
	}

	putchar(10);
	return (0);
}
