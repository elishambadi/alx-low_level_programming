#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 *print_numbers - print nums
 *@n: no of vars
 *@separator: separator of nums
 *
 *Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	if (n == 0)
		return;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		if (separator != NULL)
		{
			if (i == n - 1)
				printf("%d ", va_arg(ap, int));
			else
				printf("%d%s ", va_arg(ap, int), separator);
		}
		else
		{
			printf("%d ", va_arg(ap, int));
		}
	}
	va_end(ap);

	printf("\n");
}
