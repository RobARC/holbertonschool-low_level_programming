#include "holberton.h"
#include <stdio.h>
/**
 * * cap_string-Entry point
 * @s: is a variable pointer
 * @
 * @
 *  Return: Always 0.
 */
char *cap_string(char *s)
{
	int a;
	int b;
	char s1[] = {',', ';', '.', '!', '"', '(',
			')', '{', '}', ' ', '?', '\n', '\t'};

		if (s[0] >= 'a' && s[0] <= 'z')
			s[0] = s[0] - 32;

		for (a = 0; s[a] != '\0'; a++)
		{
			for (b = 0; s1[b] != '\0'; b++)
			{
				if (s[a] == s1[b] && s[a + 1] >= 'a' && s[a + 1] <= 'z')
				{
					s[a + 1] = s[a + 1] - 32;
				}
			}
		}
	return (s);

}
