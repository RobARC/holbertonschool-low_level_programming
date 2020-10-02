#include "holberton.h"
#include <stdio.h>
/**
 * *string_toupper-Entry point
 * @s: is a variable pointer
 * @
 * @
 *  Return: Always 0.
 */
char *string_toupper(char *s)
{
	int a;

	for (a = 0; s[a] != '\0'; a++)
	{
		if (s[a] >= 'a' && s[a] <= 'z')
		{
			s[a] = s[a] - 32;
		}
	}
	return (s);
}
