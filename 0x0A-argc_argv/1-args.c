#include<stdio.h>
#include<stdlib.h>

/**
* main-Entry point
* @argc: argument int
* @argv: argument array char
* Return: Always 0.
*
*/

int main(int argc, char *argv[])
{
int i = 0;
int x;
	x = strtol(argv[i], NULL,  10);

	if (x >= 0)

	printf("%d \n", (argc - 1));

	return (0);
}

