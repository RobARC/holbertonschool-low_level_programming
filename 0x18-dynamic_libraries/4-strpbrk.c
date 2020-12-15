#include "holberton.h"
#include <stddef.h>
/**
 * *_strpbrk-Entry point
 * @
 * @accept: is a variable pointer
 * @s: is a variable pointer
 *  Return: Always 0.
 */
char *_strpbrk(char *s, char *accept)

{
int i;
int j;
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
			return (&s[i]);
			}

		}
	}
	return (NULL);
}
