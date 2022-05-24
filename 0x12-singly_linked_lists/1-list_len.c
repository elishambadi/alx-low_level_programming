#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 *lis_tlen - return list length
 *@h: list head pointer
 *
 *Return: list length
 */

size_t list_len(const list_t *h)
{
	unsigned int i;

	i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}

	return (i);

}
