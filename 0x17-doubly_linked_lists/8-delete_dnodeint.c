#include "lists.h"
/**
 *delete_dnodeint_at_index - deletes the node at index
 *@head: Pointer to head
 *@index: index
 *Return: 1 on succese or -1 on fail
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *node = *head;
	unsigned int count = 0;

	if (node == NULL)
		return (-1);


	if (index == 0 && node->next == NULL)/*delete If there is only one node*/
	{
		free(*head);
		*head = NULL;
		return (1);
	}

	if (index == 0 && node->next != NULL) /* delete initial position */
	{
		*head = node->next;
		(*head)->prev = NULL;
		free(node);
		return (1);
	}
	while (node)
	{
		if (count == index && node->next != NULL) /* delete especific position */
		{
			(node->prev)->next = (node->next);
			(node->next)->prev = (node->prev);
			free(node);
			return (1);
		}
		if (count == index && node->next == NULL) /* delete the last postion */
		{
			(node->prev)->next = NULL;
			free(node);
			return (1);
		}
		node = node->next;
		count++;
	}
	return (-1);
}
