#include "holberton.h"
#include <stddef.h>
/**
 * *_strspn-Entry point
 * @
 * @accept: is a variable pointer
 * @s: is a variable pointer
 *  Return: Always 0.
 */
unsigned int _strspn(char *s, char *accept)

{
int i, j;
unsigned int g;
g = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				g = g + 1;
				break;
			}
		}
		if (accept[j] == '\0')
		break;
	}
	return (g);
}
