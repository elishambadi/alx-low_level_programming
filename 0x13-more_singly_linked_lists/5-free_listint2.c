#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 *free_listint - free memory
 *@head: list head
 *
 *Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *temp, *node;

	node = *head;

	while (node != NULL)
	{
		temp = node->next;
		free(node);
		node = temp;
	}

	*head = NULL;
}
