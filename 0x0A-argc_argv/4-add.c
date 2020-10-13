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
int i, k;
int sum = 0;
char *d;

		if (argc > 1)

			for (i = 1; i < argc; i++)
			{
				sum += atoi(argv[i]);
				d = argv[i];

				for (k = 0; d[k]; k++)
				{
					if (d[k] < 48 || d[k]  > 57)
					{
						printf("%s\n", "Error");
						return (1);
					}
				}
			}

		printf("%d\n", sum);
		return (0);

}
