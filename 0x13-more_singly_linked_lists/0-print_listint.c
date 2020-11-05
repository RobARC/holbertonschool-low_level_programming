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
int n = 0;

	while (h != NULL)
	{
		printf("%i\n", h->n);
		h = h->next;
		n++;
	}
return (n);
}

