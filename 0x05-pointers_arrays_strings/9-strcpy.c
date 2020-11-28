#include "holberton.h"

/**
 * \*_strcpy - copy a string in other string
 * @dest: string
 * @src: string
 * Return: dest
 */
char * _strcpy(char *dest, const char *src)
           {
              int i;

               for (i = 0; src[i] != '\0'; i++)
		{
			dest[i] = src[i];
		}
 		dest[i] = '\0';
		return (dest);
           }









