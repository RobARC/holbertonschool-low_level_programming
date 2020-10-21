#include<stdio.h>
#include "function_pointers.h"

/**
 * print_name- use a pointer to a function to print name in various cases
 * @name: pointer to the estring containing the name.
 * @f: pointer to the functions
 * Return: Nothing.
 */

void print_name(char *name, void (*f)(char *))
{
f(name);
}
