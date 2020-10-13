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
int i;
int mul = 1;

	if (argc > 1)
	for (i = 1; i < argc; i++)
	{
		int x = atoi(argv[i]);

		mul =  mul * x;

	}
	else
	{
		printf("%s\n", "Error");
		return (0);
	}
	printf("%d\n", mul);

return (0);
}
