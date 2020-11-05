#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint2 - free dinamic memory from the struct listint_t.
 * @head: pointer data type listint_t
 *
 * Return: void.
 */
void free_listint2(listint_t **head)
{
	if (!head)
	{
		return;
	}
	if (*head)
	{
		free_listint2(&((*head)->next)); /*free the addres fron elements head->next*/
		free(*head); /* free the pointer to *head */
		*head = NULL;
	}
}


