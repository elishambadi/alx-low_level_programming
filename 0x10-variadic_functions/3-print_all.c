#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 *print_all - print everything
 *@format: various format
 *
 *Return: void
 */

void print_all(const char * const format, ...)
{
	unsigned int i;
	va_list ap;
	char* str;

	if (n == 0)
	{
		printf("\n");
		return;
	}

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(ap, char*);
		if (str == NULL)
		{
			str = "(nil)";
		}

		if (separator != NULL)
		{
			if (i == n - 1)
				printf("%s", str);
			else
				printf("%s%s", str, separator);
		}
		else
		{
			printf("%s", str);
		}
	}
	va_end(ap);

	printf("\n");
}
