#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_print - function that prints a hash table.
 * @ht: pointer to hash_table_t
 * Return: there is not
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node = NULL;
	size_t count = 0;
	unsigned long i;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node)
		{
			if (count)
				printf(", ");
			printf("'%s': '%s'", node->key, node->value);
			count++;
			node = node->next;
		}
	}
	printf("}\n");
}
