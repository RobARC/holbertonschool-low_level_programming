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

	if (h == NULL)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;

	while (aft != NULL)
	{
		if (count == idx) /* find the position to insert */
			break;
		count++;
		aft = aft->next;
	}
	if (count != idx)
	{
		free(new);
		return (NULL);
	}
	new->next = aft->next; /* pointer to aft->next */
	new->prev = aft->prev; /* pointer to aft-prev */

	if (aft->next != NULL) /* if find the last nodo jump this step */
		(aft->next)->prev = new; /* pointer prev to new */
	aft->next = new; 

	return (new);

}
