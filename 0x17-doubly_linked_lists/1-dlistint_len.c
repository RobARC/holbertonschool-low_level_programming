#include "lists.h"

/**
 * dlistint_len - function print elements in double linked lists
 * @h: pointer to the head double linked lists
 * @count: variable counter
 * Return: the size the double linked list
 */
size_t dlistint_len(const dlistint_t *h)
{

        unsigned int count = 0;

        while (h != NULL)
        {
        	h = h->next;
	  	count++;
        }
        return(count);
}

