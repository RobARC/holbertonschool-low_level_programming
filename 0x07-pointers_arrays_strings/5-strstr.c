#include "holberton.h"
#include <stddef.h>
/**
 * *_strstr-Entry point
 * @haystack: is a variable pointer
 * @needle: is a variable pointer
 * @
 *  Return: Always 0.
 */
char *_strstr(char *haystack, char *needle)
{
int i;
int j;
	for (i = 0; needle[i] != '\0'; i++)
	{
		for (j = 0; haystack[j] != '\0'; j++)
		{
			if (haystack[j] == needle[i])
			{
				return (&haystack[j -1]);
			}
		}

	}
	return (NULL);
}
