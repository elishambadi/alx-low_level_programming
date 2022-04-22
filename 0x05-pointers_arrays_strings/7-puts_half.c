#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 *puts_half - reverse string
 *@str: string to check
 */

void puts_half(char *str)
{
	int len = strlen(str), half_len;
	int i = 0;

	if (len % 2 != 0)
	{
		half_len = (len - 1) / 2 + 1;
	}
	else
	{
		half_len = len / 2;
	}

	for (i = half_len; i < len; i++)
	{
		printf("%c", str[i]);
	}
	printf("\n");
}
