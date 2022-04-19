#include <stdio.h>
#include <ctype.h>

/**
 *_isdigit - checks if uppercase
 *@c: var to be checked
 *
 *Return: 0 if not digit, 1 if is digit
 */

int _isdigit(int c)
{
	if (isdigit(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
