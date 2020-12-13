#include "lists.h"
/**
 *free_dlistint - free double lists
 *@head: pointer to the head double linked list
 *Return: Allways return 0
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *next;

	if (!head)
	{
		return;
	}
	else
	{
		while (head != NULL)
		{

			next = head->next;
			free(head);
			head = next;
		}
	}
}

