#include "holberton.h"
/**
 * swap_int-Entry point
 * @a: is a pointer
 * @b: is a pointer
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{

int x;

x = *a;
*a = *b;
*b = x;

}
