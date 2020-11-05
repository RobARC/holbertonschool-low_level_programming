#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * pop_listint - check the code for Holberton School students.
 * @head: pointer data type listint_t
 * Return: num.
 */

int pop_listint(listint_t **head)
{
listint_t *aux; /*declare aux like data type struct listint_t*/
int num; /*Variable to stored element n*/

	if (*head == NULL)/*xtrem case is *head = NULL*/
		return (0);
	if (*head)
	{
		aux = *head; /*aux take values from *head*/
		num = (*head)->n;
		*head = (*head)->next;
		free(aux);
	}
	return (num);
}
