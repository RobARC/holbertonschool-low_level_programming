#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
* print_listint - print the elements of the list
* @h: is a pointer to struct
* Return: elements of the list
*/

size_t print_listint(const listint_t *h)
{
unsigned int n = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		n++;
		h = h->next;
	}
return (n);
}

