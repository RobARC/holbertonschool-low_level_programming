#include<stdio.h>
#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"
/**
* hash_table_set - Adds an element to the hash table
* @ht: hash table you want to add or update
* @key: key
* @value: value associated with key. value must be duplicate.
* Return: 1 is succed otherwise 0.
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node = NULL, *head;
	unsigned long int index;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	head = ht->array[index];
	while (head)
	{
		if (strcmp(key, head->key) == 0)
		{
			char *_value = strdup(value);

			if (_value == NULL)
				return (0);
			free(head->value);
			head->value = _value;
			return (1);
		}
		head = head->next;
	}
	new_node = calloc(1, sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	if (new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node);
		return (0);
	}
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}
