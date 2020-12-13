#include "lists.h"
/**
 * sum_dlistint - the sum of all the data (n) at the double linked list
 *@head: Pointer tio the double list linked
 *
 *Return: the sum of all n data at the double linked list
 */
int sum_dlistint(dlistint_t *head)
{
int add = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		add += head->n;
		head = head->next;
	}
	return (add);
}
