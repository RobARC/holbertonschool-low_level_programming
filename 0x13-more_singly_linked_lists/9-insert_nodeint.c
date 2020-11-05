#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
* insert_nodeint_at_index-function that inserts a new node at a given position.
* @head: pointer to the  struct listint_t
* @idx: Index
* @n: data struct
* Return: the sum of the data elements n
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *nodo, *aux;
unsigned int count = 0;
nodo = *head;

	if (nodo == NULL && idx != 0)
		return (NULL);

	nodo = malloc(sizeof(struct listint_s)); /*allocated memory*/

	if (nodo == NULL) /* if memory fail */
	{
		free(nodo);
		return (NULL);
	}

	nodo->n = n;
	nodo->next = NULL;

	if (idx == 0) /* if the given position is the first */
	{
		nodo->next = *head;
		*head = nodo;
		return (nodo);
	}
	else /* for the rest of position */
	{
		aux = *head;
		while (aux != NULL)
		{
			if (count == idx - 1)
			{
				nodo->next = aux->next;
				aux->next = nodo;
				return (nodo);
			}
			aux = aux->next;
			count++;
		}
		return (NULL);
	}
}

