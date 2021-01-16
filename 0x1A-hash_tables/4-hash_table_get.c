#include<stdio.h>
#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"
/**
* hash_table_get - retrieves a value associated with a key.
* @ht: hash table you want to add or update
* @key: key
*
* Return: value or NULL
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *nnode;
	unsigned long int index;

	if (ht == NULL || key == NULL)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	nnode = ht->array[index];
	while (nnode)
	{
		if (strcmp(key, nnode->key) == 0)
			return (nnode->value);
		nnode = nnode->next;
	}
	return (NULL);
}
