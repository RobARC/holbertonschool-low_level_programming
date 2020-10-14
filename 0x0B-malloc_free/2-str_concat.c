#include<stdlib.h>
#include<stdio.h>
#include "holberton.h"
/**
 *  _strlen-Entry point
 *
 * @s: is a pointer variable char
 *  Return: Always 0.
 */
int  _strlen(char *s)
{
	int i;

	for (i = 0; *s != '\0'; s++)

	i++;
	return (i);
}

/**
 * str_concat-Entry point
 * @s1: is char poiter variable
 * @s2: is char poiter variable
 *  Return: Always 0.
 */

char *str_concat(char *s1, char *s2)
{

	unsigned int l1, l2, a, b;
	char  *d;
	/*d = "";*/
	/*s = "";*/

	if (s1 == NULL)
		s1 = "";
	l1 = _strlen(s1);

	if (s2 == NULL)
		s2 = "";
	l2 = _strlen(s2);

	d = (char *)malloc((l1 + l2 + 1) * sizeof(char));

	if (d == NULL)
		return (NULL);

	for (a = 0; s1[a] != '\0'; a++)
		d[a] =  s1[a];

	for (b = 0; s2[b] != '\0'; b++)

		d[a + b] = s2[b];

	return (d);

}
