#include "holberton.h"

/**
 * *_strchr-Entry point
 * @c: is a char variable
 * @s: is a variable pointer
 * @
 *  Return: Always 0.
 */
char *_strchr(char *s, char c)
{
int i;

		for (i = 0; *s != '\0'; i++)
		{
			if (s[i] == c)
			{
				break;
			}
		}
		return (&s[i]);
}
