#include <stdio.h>
#include "main.h"

/**
 *swap_int - swap two integers
 *@a: integer one
 *@b: integer two
 */

void swap_int(int *a, int *b)
{
	int temp_a = 0;
	int temp_b = 0;

	temp_a = *a;
	temp_b = *b;

	*a = temp_b;
	*b = temp_a;
}
