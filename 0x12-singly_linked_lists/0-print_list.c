#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
 * print_list - point print all nodes from a lists
 * @h: pointer to the struct
 * Return: lists lenght
 *
 */

size_t print_list(const list_t *h)
{
unsigned int count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		count++;
		h = h->next;
	}
	return (count);
}
