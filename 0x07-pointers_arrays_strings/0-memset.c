#include "holberton.h"

/**
 * *_memset-Entry point
 * @b: is a char variable
 * @s: is a variable pointer
 * @n: is a unsigned int variable
 *  Return: Always 0.
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

		for (i = 0; i < n; i++)
		{
			*s = b;
			s++;
		}
		return (s);

}
