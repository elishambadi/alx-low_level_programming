#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 *create_array - create an array with malloc
 *@size: array size
 *@c: init char
 *
 *Return: char array
 */

char *create_array(unsigned int size, char c)
{
	char *str;

	if (size == 0)
	{
		return (NULL);
	}

	str = malloc(sizeof(char) * size);

	if (str == NULL)
	{
		return (NULL);
	}

	str[0] = c;

	return (str);
}
