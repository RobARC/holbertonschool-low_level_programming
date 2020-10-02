#include "holberton.h"
#include <stdio.h>
/**
 * *rot13-Entry point
 * @
 * @s: is a variable pointer
 * @
 *  Return: Always 0.
 */
char *rot13(char *s)
{
int i;
int j;
char s1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char s2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

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
