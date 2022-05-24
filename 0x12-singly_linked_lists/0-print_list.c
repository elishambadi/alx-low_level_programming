#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 *print_list - print a single linked list
 *@h: list head pointer
 *
 *Return: node number
 */

size_t print_list(const list_t *h)
{
	unsigned int i;

	i = 1;

	if (h == NULL)
	{
		printf("[0] (nil)");
	}

	while (h != NULL)
	{
		printf("[%d] %s\n", h->len, h->str);
		i++;
		h = h->next;
	}

	if (h == NULL)
	{
		printf("[0] (nil)");
	}

	return (i);

}
