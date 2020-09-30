#include "holberton.h"
/**
 * rev_string-Entry point
 * @s: is a pointer
 *
 * Return: Always 0.
 */
void rev_string(char *s)
{
int x, l;
char *b, *e, t;

	for (x = 0; s[x] != '\0'; x++)
	{
	}
l = x;
b = s;
e = s;
	for (x = 0; x < l - 1; x++)
	{
		e++;
	}
	for (x = 0; x < l / 2; x++)
	{
		t = *e;
		*e = *b;
		*b = t;
		b++;
		e--;
	}
}
