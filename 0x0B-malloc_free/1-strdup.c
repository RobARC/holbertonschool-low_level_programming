#include "holberton.h"
#include<stdlib.h>
/**
 * _strdup-Entry point
 * @
 * @
 * @str: is a pointer variable char
 *  Return: Always 0.
 */
char *_strdup(char *str)
{
char *len;
unsigned int i, l;

		for (i = 0; str[i] != 0; i++)
		{}
		if (str == NULL)
			return (NULL);

		len = (char *) malloc(i * sizeof(char));

		if (len == NULL)
			return (NULL);

		for (l = 0; str[l] != '\0'; l++)

			len[l] = str[l];
			return (len);

}

