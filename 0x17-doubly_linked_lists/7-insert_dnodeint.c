#include "lists.h"
/**
 * insert_dnodeint_at_index-function insert a new node at a given position.
 *@h: Pointer to node head
 *@idx: Variable Index
 *@n: Node Data
 *Return: New node insert
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{	unsigned int count = 0, len = 0;
	dlistint_t *newnode = NULL, *tmpnode = *h;

	len = dlistint_len(*h);

	if (idx <= len)
	{
		if (h == NULL && idx != 0)
			return (NULL);
		if (idx == 0) /* is the given position is the first*/
			newnode = add_dnodeint(h, n);
		else if (idx == len)
			newnode = add_dnodeint_end(h, n);
		else
		{
			newnode = malloc(sizeof(dlistint_t));
			if (newnode == NULL)
			{
				free(newnode);
				return (NULL);
			}
			newnode->n = n;
			while (tmpnode != NULL)
			{
				if (count == idx - 1) /* find the position to insert */
				{
					newnode->next = tmpnode->next;
					(tmpnode->next)->prev = newnode;
					tmpnode->next = newnode;
					newnode->prev = tmpnode;
					return (newnode);
				}
				count++;
				tmpnode = tmpnode->next;
			}
		}
		return (newnode);
	}
	return (NULL);
}

/**
* dlistint_len - count all elements at the double linked
* @h: pointer to head double linked list
* Return: the number of nodes at the double linked list
*/
size_t dlistint_len(const dlistint_t *h)
{
size_t nodes = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}

