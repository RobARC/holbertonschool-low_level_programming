#include "holberton.h"
#include <stdio.h>

/**
 * *_strcat-Entry point
 * @dest: is a variable pointer
 * @src: is a variable pointer
 * Return: Always 0.
 */
char *_strcat(char *dest, char *src)
{
int a;
int b;
	for (a = 0; dest[a] != '\0'; a++)
	{
	}
	for (b = 0; src[b] != '\0'; b++)
	{
		dest[a++] = src[b];
	}
	return (dest);
}
