#include <stdio.h>
#include "lists.h"
/**
*print_dlistint - print a doubly linked list & element count
*@h: list head
*Return: list size
*/
size_t print_dlistint(const dlistint_t *h)
{
	unsigned int i = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		i++;
		h = h->next;
	}
	return (i);
}
