#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main-Entry point
*
* Return Always 0 (Success)
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

if (n > 0)
{
	printf("%d\t%s", n, "is positve");
}
if (n == 0)
{
	printf("%d\t%s", n,  "is zero");
}
if (n < 0)
{
	printf("%d\t%s", n,  "is negative");
}
	printf("\n");
	return (0);
}
