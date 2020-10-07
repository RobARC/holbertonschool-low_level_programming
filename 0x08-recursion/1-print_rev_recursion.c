#include "holberton.h"
/**
 * _print_rev_recursion-Entry point
 * @s: is a variable pointer
 * @
 * @
 *  Return: Always 0.
 */

void _print_rev_recursion(char *s)
{
	if (*(s + 1) == '\0')
	{
		return;
	}

	s++;

	_print_rev_recursion(s);

	_putchar(*s);

	if (*(s - 1) == '\n')
	{
		_putchar('\n');
	}
}
