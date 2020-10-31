#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - point print all nodes from a lists
 * @head: adress memory of each node
 * @str: string to print
 * Return: head in the first position on the linked list
 *
 */

list_t *add_node_end(list_t **head, const char *str)
{

list_t *tmp;
unsigned int count = 0;

struct list_s* newlists = malloc(sizeof(struct list_s));

	if (newlists == NULL)

		return (NULL);

	newlists->str = strdup(str);

	while (str[count])
	{
		if (newlists != NULL)
		count++;
	}
	newlists->len = count;
	newlists->next = NULL;
	if (*head == NULL)
	{
		*head = newlists; /* creo un nuevo nodo */
	}
	else
	{
		tmp = *head;
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = newlists;
	}
	return (*head);
}
