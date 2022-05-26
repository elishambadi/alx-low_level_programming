#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 *listint_len - print all elements on list
 *@h: list var
 *
 *Return: length
 */

size_t listint_len(const listint_t *h)
{
	size_t i;

	i = 0;
	while (h != NULL)
	{
		h = h->next;
		i++;
	}

	return (i);
}
