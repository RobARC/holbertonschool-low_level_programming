#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
* sum_listint - function that returns the sum of all the data n .
* @head: pointer to the  struct listint_t
* Return: the sum of the data elements n
*/
int sum_listint(listint_t *head)
{
listint_t *nodo = head; /* declare a new instance of strutc listint_t nodo*/
unsigned int count = 0, sum = 0;

	if (nodo == NULL)
		return (0);

	while (nodo != NULL)
	{
		sum += nodo->n;
		count++;
		nodo = nodo->next;
	}
	return (sum);
}
