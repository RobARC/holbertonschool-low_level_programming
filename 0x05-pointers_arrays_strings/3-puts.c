#include "holberton.h"
/**
 * _puts-Entry point
 * @str: is a pointer
 *
 * Return: Always 0.
 */
void _puts(char *str)

{
int x;
	for (x = 0; *str != '\0'; str++)
	{
	_putchar(*str);
	x++;
	}
_putchar('\n');

}
