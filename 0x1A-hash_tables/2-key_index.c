#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"
/**
* key_index - Give the index of a key.
* @key: pointer to store the key
* Return: the index.
* @size: size of the array
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	if (size <= 0)
		return (0);
	return (hash_djb2(key) % size);
}
