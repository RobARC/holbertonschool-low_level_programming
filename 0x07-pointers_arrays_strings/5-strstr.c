#include "holberton.h"
#include <string.h>
/**
 * *_strstr-Entry point
 * @haystack: is a variable pointer
 * @needle: is a variable pointer
 * @
 *  Return: Always 0.
 */
char *_strstr(char *haystack, char *needle)
{
char *a, *c;

	while (*haystack)
	{
		c = haystack;
		a = needle;
		while (*a == *haystack && *a)
		{
			haystack++, a++;
		}
		if (*a == '\0')
			return (c);
		haystack = c + 1;
	}
	return (0);
}

