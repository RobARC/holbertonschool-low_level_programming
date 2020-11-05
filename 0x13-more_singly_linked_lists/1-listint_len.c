#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
* print_listint - print the elements of the list
* @h: is a pointer to struct
* Return: elements of the list
*/

size_t listint_len(const listint_t *h)
{
unsigned int n = 0;

	while (h != NULL)
	{
		n++;
		h = h->next;
	}
return (n);
}

