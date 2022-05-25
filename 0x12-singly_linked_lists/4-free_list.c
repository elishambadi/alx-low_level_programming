#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 *free_list - free list
 *@head: list head pointer
 *
 *Return: void
 */

void free_list(list_t *head)
{
	list_t *n;

	while ((n = head) != NULL)
	{
		head = head->next;
		free(n->str);
		free(n);
	}
}
