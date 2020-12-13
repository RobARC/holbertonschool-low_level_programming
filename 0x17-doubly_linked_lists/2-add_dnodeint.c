#include "lists.h"

/**
 * add_dnodeint -  function that add elements in double linked lists
 * @head: pointer to the head double linked lists
 * @n: value node data
 * Return: the size the double linked list
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{

	dlistint_t *tmp;	/* pointer to create new nodo */

	if (head == NULL) /* ask for head is NULL */
	{
		return (NULL);
	}

	tmp =  malloc(sizeof(dlistint_t)); /* create memory space to struct node */
	if (tmp == NULL)
	{
		return (NULL);
	}

	tmp->n = n;
	tmp->next = NULL;
	tmp->prev = NULL;

	if (*head != NULL) /* first time *head it will be NULL */
	{
		tmp->next = *head;
		(*head)->prev = tmp;
	}
	*head = tmp; /* to create head the first time */

	return (tmp);
}
