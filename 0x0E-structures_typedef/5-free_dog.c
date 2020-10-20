#include "dog.h"
/**
* free_dog- free dog structure
* @d: is pointer variable
*
* Return: void
*/

void free_dog(dog_t *d);
{
	if (d == NULL)

	free((*d).name);
	free((*d).owner);
	free(d);
}
