#include "holberton.h"
#include <stdio.h>
/**
 * *leet-Entry point
 * @
 * @s: is a variable pointer
 * @
 *  Return: Always 0.
 */
char *leet(char *s)
{
	int i;
	int j;
	char s1[] = "4433007711";
	char s2[] = "aAeEoOtTlL";

		for (i = 0; s[i]  != '\0'; i++)
		{
			for (j = 0; s2[j] != '\0'; j++)
			{
				if (s[i] == s2[j])
				{
					s[i] = s1[j];
					break;
				}
			}
			j = 0;
		}
	return (s);

}
