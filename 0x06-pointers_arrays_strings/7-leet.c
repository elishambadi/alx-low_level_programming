#include <stdio.h>
#include "main.h"
#include <string.h>
#include <ctype.h>

/**
 *leet - encode to 1337
 *@c: string to encode
 *
 *Return: char string
 */

char *leet(char *c)
{
	int i, j;
	int len = strlen(c);

	char num[5] = {'4', '3', '0', '7', '1'};
	char alpha[5] = {'a', 'e', 'o', 't', 'l'};

	for (i = 0; i < len; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (*(c + i) == alpha[j] || *(c + i) == toupper(alpha[j]))
			{
				*(c + i) = num[j];
			}
		}

		j = 0;
	}

	return (c);
}
