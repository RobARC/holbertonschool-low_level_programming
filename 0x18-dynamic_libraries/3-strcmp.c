#include "holberton.h"
#include <stdio.h>
/**
 * *_strcmp-Entry point
 * @s1: is a variable pointer
 * @s2: is a variable pointer
 *
 * Return: Always 0.
 */
int _strcmp(char *s1, char *s2)
{
	for ( ; *s1 == *s2; s1++, s2++)
	if (*s1 == '\0')
	return (0);
	return (*s1 - *s2);
}
