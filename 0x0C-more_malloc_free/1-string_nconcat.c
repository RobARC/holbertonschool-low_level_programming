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
 *  string_nconcat-Entry point
 * @n: is variable unsigned int
 * @s1: is a pointer variable
 * @s2: is a pointer variable
 *  Return: Always 0.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int i, j;
unsigned int l1, l2;
char *p;


	if (s1 == NULL)
		s1 = "";
	 l1 = _strlen(s1);
	if (s2 == NULL)
		s2 = "";
	 l2 = _strlen(s2);

	if (n >= l2)
		l2 = n; /*nota: en este momento todo el  largo de s2*/
				/* asi que nes l2 = l2 +1 deberia dar 11*/

	p = (char *)malloc((l1 + n + 1) * sizeof(char));

	if (p == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
	{
		p[i] =  s1[i];
	}

	for (j = 0; s2[j] != '\0'; j++)
	{

		if (j == n)
		{
			p[i + j] = s2[j];
			p[i + j] = '\0';
			return (p);
		}
		else
		{
			p[i + j] = s2[j];
		}
	}
	return (p);
}
