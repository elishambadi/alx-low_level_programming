#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 *string_nconcat - concat 2 string
 *@s1: str1
 *@s2: str2
 *@n: no of bytes of str2 to concat
 *
 *Return: char pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int s1_size, s2_size; 
	char *s3;
	char *s_new;
	unsigned int i;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	s1_size = sizeof(s1);
	s2_size = sizeof(s2);

	if (n >= s2_size)
	{
		n2 = s2_size:wq
			;
	}

	s3 = malloc(sizeof(char) * (s1_size + n));

	if (s3 == NULL)
	{
		return NULL;
	}

	for (i = 0; i < size1; i++)
	{
		s3[i] = s1[i];
	}
	for (; i < (size1 + n); i++)
	{
		s3[i] = s2[i - size1];
	}
	s3[i] = '\0';
	return (s3);
}
