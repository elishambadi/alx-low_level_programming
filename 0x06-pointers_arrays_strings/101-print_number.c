#include <stdio.h>
#include "main.h"
#include <string.h>
#include <stdbool.h>

/**
 *print_number - print an integer upto len 5
 *@n: integer
 */
int get_len(int val)
{
	int l =! val;

	while (val)
	{
		l++;
		val /= 10;
	}
	return (l);
}


void print_number(int n)
{
	int len = get_len(n);
	int *ptr = &n;
	int i = 0;

	while (len > 0)
	{
		printf("%d", *(ptr + i));
		i++;
		len--;
	}

	printf("\n");
}
