#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_list - free dinamic memory from the struct list_t.
 * @head: pointer data type list_t
 *
 * Return: void.
 */

void free_list(list_t *head)
{

	if (!head)
	{
		return;
	}
	else
	{
		free_list(head->next);
		free(head->str);
		free(head);
	}
}
