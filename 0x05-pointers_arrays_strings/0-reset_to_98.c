#include <stdio.h>
#include "main.h"

/**
 *reset_to_98 - reset to 98 using pointers
 *@*n: pointer to variable
 */

void reset_to_98(int *n)
{
	*n = 98;

	printf("%d", *n);
}
