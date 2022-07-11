#include <stdio.h>
#include "lists.h"

/**
*dlistint_len - count elements
*@h: head of list
*Return: size
*/
size_t dlistint_len(const dlistint_t *h)
{
	unsigned int i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
