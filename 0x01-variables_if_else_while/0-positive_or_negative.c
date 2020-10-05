#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main-It is the entry point
*
* Return: Always 0 (Success)
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;


	if (n > 0)
	{
		printf("%d%s", n, " is positve");
	}
	if (n == 0)
	{
		printf("%d%s", n, " is zero");
	}
	if (n < 0)
	{
		printf("%d%s", n, " is negative");
	}

	printf("\n");
	return (0);
}
