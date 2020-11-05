#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint - free dinamic memory from the struct listint_t.
 * @head: pointer data type listint_t
 *
 * Return: void.
 */
void free_listint(listint_t *head)
{
	if (!head)
	{
		return;
	}
	else
	{
		free_listint(head->next);
		free(head);
	}
}


