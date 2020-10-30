#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * add_node - point print all nodes from a lists
 * @head: adress memory of each node
 * @str: string to print
 * Return: head in the first position on the linked list
 *
 */

list_t *add_node(list_t **head, const char *str)
{
list_t *newlits;
unsigned int count = 0;

	newlists = malloc(sizeof(struct list_s));

	if (newlists == NULL)

		return (NULL);

	newlists->str = strdup(str);

	while (str[count])
	{
		count++;
	}
	newlists->len = count;


	if (*head != NULL)
	{
		newlists->next = *head;
	}
	if (*head == NULL)
	{
		newlists->next = NULL;
	}
	*head = newlists;
	return (*head);
}
