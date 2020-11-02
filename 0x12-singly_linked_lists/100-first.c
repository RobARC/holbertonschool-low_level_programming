#include <stdio.h>
#include "lists.h"

/**
 *functionBeforeMain - Function Before Main
 *
 *
 */


void __attribute__ ((constructor)) functionBeforeMain()
{

	printf("%s", "You're beat! and yet, you must allow,\n");
	printf("%s", "I bore my house upon my back!\n");
}


