#include "holberton.h"
#include<stdlib.h>
#include "holberton.h"
/**
 * _strdup-Entry point
 * @str: is a pointer variable char
 *  Return: Always 0.
 */
char *_strdup(char *str)
{
char *len;
unsigned int i, l;

		for (i = 0; str[i] != '\0'; i++)
		{
		}
		len = (char *) malloc(i * sizeof(char) + 1);

		if (str == NULL)
		{
			return (NULL);
		}

		if (len == NULL)
		{
			return (NULL);
		}
		for (l = 0; str[l] != '\0'; l++)
		{
			len[l] = str[l];

		}
	return (len);
}


