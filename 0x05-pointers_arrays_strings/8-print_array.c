#include "main.h"
#include <stdio.h>

/**
 *print_array - print array
 *@array: array
 *@n: number of elements staring from 0
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		a = a + i;
		printf("%d, ", *a);
	}
}
