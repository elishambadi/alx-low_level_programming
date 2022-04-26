#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "main.h"

/**
 *rot13 - rot13 implementation
 *@c: character string
 *
 *Return: character string
 */

char *rot13(char *c)
{
	printf("%s", c);

	int key = 13;
	int len = strlen(c);
	int i, j;

	char alpha[26] = {'a','b','c','d','e','f','g','h','i','j','k',
	'l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

	for (i = 0; i < len; i++)
	{
		/**
		 *Scroll thro characters
		 */
		for (j = 0; j < 26; j++)
		{

		}
	}

	return (c);
}
