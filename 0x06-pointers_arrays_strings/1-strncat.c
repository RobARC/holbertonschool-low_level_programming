#include "holberton.h"
#include <stdio.h>

/**
 * *_strncat-Entry point
 * @dest: is a variable pointer
 * @src: is a variable pointer
 * @n: is a vaiable
 * Return: Always 0.
 */
char *_strncat(char *dest, char *src, int n)
{
	int a;
	int b;
		for (a = 0; dest[a] != '\0'; a++)
		{
		}
		for (b = 0; src[b] != '\0'; b++)
		{
			if (b < n)
			{
				dest[a++] = src[b];
			}
		}
		return (dest);
}
