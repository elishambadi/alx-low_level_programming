#include <stdio.h>
#include "main.h"
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

/**
 *cap_string - capitalize a string
 *@c: to be capitalized
 *
 *Return: character string
 */

char *cap_string(char *c)
{
	int len = strlen(c);
	int i, j;

	char seps[13] = {',',';','.','\n','\t',' ','!','?','"','(',')','{','}'};

	bool cap = true;

	for (i = 0; i < len - 1; i++)
	{
		if (cap == true)
		{
			*(c + i) = toupper(*(c + i));
		}
		else
		{
			continue;
		}

		for (j = 0; j < 13; j++)
		{
			printf("For loop entered");
			if (seps[j] == *(c + i))
			{
				cap = true;
				printf("Cap true\n");
			}
			else
			{
				cap = false;
			}
		}

		j = 0;
	}
	
	return (c);
}
