#include "lists.h"
/**
 * insert_dnodeint_at_index-function insert a new node at a given position.
 *@h: Pointer to node head
 *@idx: Variable Index
 *@n: Node Data
 *Return: New node insert
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int count = 0;
	dlistint_t *new, *aft;

	aft = *h;

	if (h == NULL && idx != 0)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	new->n = n;
	new->next = NULL;
	new->prev = NULL;
	if (idx == 0) /* is the given position is the first */
	{
		new->next = *h;
		*h = new;
		aft->prev = new;
		return (new);
	}
	while (aft != NULL)
	{
		if (count == idx) /* find the position to insert */
			break;
		count++;
		aft = aft->next;
		printf("hola mundo");
	}
	if (count != idx)
	{
		free(new);
		return (NULL);
	}
	new->prev = aft; /* pointer to aft-prev */
	new->next = aft->next; /* pointer to aft->next */
	aft->prev = new; 
	aft = aft->next;
	aft = aft->next;
	if (aft->next != NULL) /* if find the last nodo jump this step */
		(aft->next)->prev = new; /* pointer prev to new */

	aft->next = new;
	return (new);
}
