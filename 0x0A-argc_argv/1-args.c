#include<stdio.h>

/**
* main-Entry point
* @argc: argument int
* @argv: argument array char
* Return: Always 0.
*
*/

int main(int argc, char *argv[])
{

	printf("%d\n", (argc - 1));

	argv--;

	return (0);
}

