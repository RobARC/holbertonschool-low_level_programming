#include<stdio.h>
/**
* main-Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int i;
	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
		printf("Fizz");
		if (i % 5 == 0)
		printf("Buzz");
		if (i % 3 != 0 && i % 5 != 0)
		printf("%d", i);
		printf("%c", 32);
	}
	printf("\n");
	return(0);
}
