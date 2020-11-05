#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint_end - add a node at the end of the list
 * @head: adress memory of each node
 * @n: data node
 * Return: address of each node.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
struct listint_s *newnodo = malloc(sizeof(struct listint_s));
listint_t *aux;

	if (newnodo == NULL)
	{
		return (NULL);
	}
newnodo->n = n;
newnodo->next = NULL; /*pointer to NULL*/

	if (*head == NULL)
	{
		*head = newnodo; /*add a newnodo if pointer *head is NULL*/
	}
	else
	{
		aux = *head; /* aux function to not lost the reference head*/
		while (aux->next != NULL)
		{
			aux = aux->next;
		}
		aux->next = newnodo;
	}
return (*head);

}

