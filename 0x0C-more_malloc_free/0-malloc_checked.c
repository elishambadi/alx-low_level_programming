#include "main.h"
#include <stdlib.h>

/**
 *malloc_checked - check if malloc works
 *@b: size of mem
 *Return: void pointer
 */

void *malloc_checked(unsigned int b)
{
	int *mem;

	mem = (void *) malloc(b);

	if (mem == NULL)
	{
		exit(98);
	}

	/**
	 *Note that a void * function
	 *must return a void pointer as opposed
	 *to an ordinary void that doesn't have to
	 *return anything
	 */

	return (mem);
}
