#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 *str_concat - pointer to a copied string
 *@s1: string
 *@s2: string
 *
 *Return: char array
 */

char *str_concat(char *s1, char *s2)
{
	char *str3;
	unsigned int i, j;

	str3 = malloc(sizeof(char) * (strlen(s1) + strlen(s2)) + 1);

	if (str3 == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < strlen(s1); i++)
	{
		str3[i] = s1[i];
	}

	j = strlen(s1) - 1;
	for (i = 0; i < strlen(s2); i++)
	{
		str3[j] = s2[i];
		j++;
	}

	return (str3);
}
