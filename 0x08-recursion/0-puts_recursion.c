#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 *_puts_recursion - puts a string recursively
 *@s: string
 */

void _puts_recursion(char *s)
{
	int len = strlen(s);
	int i = 0;

	while (i <= len)
	{
		_putchar(*(s + i));
		i++;
	}

	_putchar('\n');
}
