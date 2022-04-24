#include <stdio.h>
#include "main.h"
#include <ctype.h>
#include <string.h>

/**
 *string_toupper - string to upper
 *@c: string to upper var
 *
 *Return: char of string
 */

char *string_toupper(char *c)
{
	int len = strlen(c);
	int i;

	for (i = 0; i < len - 1; i ++)
	{
		*(c + i) = toupper(*(c + i));
	}

	return (c);
}
