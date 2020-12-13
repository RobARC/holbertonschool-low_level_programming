#include "lists.h"

/**
 * print_dlistint - function print elements in double linked lists
 * @h: pointer to the head double linked lists
 * @count: variable counter
 * Return: the size the double linked list
 */
size_t print_dlistint(const dlistint_t *h)
{

	unsigned int count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}

