#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 *_strncat - concatenate two string
 *@dest: first string
 *@src: string to be added
 *@n: no of bytes to catenate
 *
 *Return: pointer of full string
 */

char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}
