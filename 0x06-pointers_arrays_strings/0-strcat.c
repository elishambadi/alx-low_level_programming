#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 *_strcat - concatenate two string
 *@dest: first string
 *@src: string to be added
 *
 *Return: pointer of full string
 */

char *_strcat(char *dest, char *src)
{
	return (strcat(dest, src));
}
