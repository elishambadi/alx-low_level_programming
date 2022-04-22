#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 *puts2 - prints a string
 *@str: string to print
 */

void puts2(char *str)
{
	int i;
	int len = strlen(str);

	for (i = 0; i < len; i++)
	{
		printf("%c",str[i]);
		i++;
	}
	printf("\n");
}
