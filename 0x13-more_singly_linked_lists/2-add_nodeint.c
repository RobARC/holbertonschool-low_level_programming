#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * add_nodeint - point print all nodes from a lists
 * @head: adress memory of each node
 * @n: node data
 * Return: head in the first position on the linked list
 *
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
struct listint_s *newnodo = malloc(sizeof(struct listint_s));

if (newnodo == NULL)
{
	return (NULL);
}

newnodo->n = n;
newnodo->next = *head;
*head = newnodo;

return (*head);

}
