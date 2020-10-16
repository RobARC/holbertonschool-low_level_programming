#include<stdlib.h>
#include<stdio.h>
#include "holberton.h"
/**
 *  _calloc-Entry point
 * @nmemb: is variable unsigned int
 * @size: is size of each elements
 *
 *  Return: Always 0.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned int i;
char *str;

	if (nmemb == 0 || size == 0)

		return (NULL);

	str = malloc(nmemb * sizeof(char *));

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < (nmemb * size); i++)
		str[i] = 0;

return (str);


}
