#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * list_len - point print all nodes from a lists
 * @h: pointer to the struct
 * Return: lists lenght
 *
 */

size_t list_len(const list_t *h)
{
unsigned int count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
