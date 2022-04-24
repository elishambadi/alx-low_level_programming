#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 *_strncpy - copy strings
 *@dest: string to copy to
 *@src: string to be copied
 *@n: no of bytes to copy
 *
 *Return: a string pointer(char)
 */

char *_strncpy(char *dest, char *src, int n)
{
	return (strncpy(dest, src, n));
}
