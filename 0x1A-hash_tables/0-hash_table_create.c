#include<stdio.h>
#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"
/**
*hash_table_create - function that creates a hash table.
*@size: the size of the table
*
*Return: HT
*/

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *HT = calloc(size, sizeof(hash_table_t *));

	if (HT == NULL)
		return (NULL);

	HT->size = size;
	HT->array = malloc(sizeof(hash_node_t) * size);

	return (HT);
}
