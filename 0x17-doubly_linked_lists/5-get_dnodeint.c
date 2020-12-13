#include "lists.h"
/**get_dnodeint_at_index get the node index at the doble linked list
 *@head: pointer to the head at the double linked list
 *@index: index give to find
 *@count: counter to compare with index
 *Return: the node give
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int count = 0;

	if (head == NULL)
		return NULL;

	while (head != NULL)
	{
		if (count == index)
			return(head);
		count++;
		head = head->next;
	}
	return(NULL);

}
