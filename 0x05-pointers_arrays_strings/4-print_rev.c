#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 *print_rev - reverse string
 *@s: string to check
 */

void print_rev(char *s)
{
	int len = strlen(s);
	int i = 0;

	for (i = len - 1; i >= 0; i--)
	{
		printf("%c", s[i]);
	}
	printf("\n");
}
