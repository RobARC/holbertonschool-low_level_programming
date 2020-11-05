#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_nodeint_at_index - .
 * @index: the index of the node we're currently looking at
 * @head: pointer to the  struct listint_t
 * Return: the data elements n
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
listint_t *nodo = head; /* declare a new instance of strutc listint_t nodo*/
unsigned int count = 0;


	if (nodo == NULL)
		return (NULL);

	while (nodo != NULL)
	{
		if (count == index) /* finding the coincidence */
			break; /* interrup de cycle and return */
			count++;
			nodo = nodo->next;

	}
	return (nodo);
}
