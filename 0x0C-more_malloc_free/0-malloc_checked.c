#include "main.h"
#include <stdlib.h>

/**
 *malloc_checked - check if malloc works
 *@b: size of mem
 */

void *malloc_checked(unsigned int b)
{
	int *mem;
	mem = (void *) malloc(b);

	if (mem == NULL)
	{
		exit(98);
	}
}
