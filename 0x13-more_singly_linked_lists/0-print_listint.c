#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 *print_listint - print all elements on list
 *@h: list var
 *
 *Return: 0
 */

size_t print_listint(const listint_t *h)
{
	size_t i;

	i = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}

	return (i);
}
