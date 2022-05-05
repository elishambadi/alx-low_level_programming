#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 *_strdup - pointer to a copied string
 *@str: string
 *
 *Return: char array
 */

char *_strdup(char *str)
{
	char *str1;
	unsigned int i;

	if (str == NULL)
	{
		return (NULL);
	}

	str1 = malloc(sizeof(char) * strlen(str) + 1);

	if (str1 == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < strlen(str); i++)
	{
		str1[i] = str[i];
	}

	return (str1);
}
