#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 *delete_nodeint_at_index - find node at index
 *@head: list head
 *@index: index of node
 *
 *Return: node found
 */

int delete_nodeint_at_index(listint_t **head, unsigned int idx)
{
	unsigned int i;
	listint_t *node, *prev;

	node = malloc(sizeof(node));
	prev = malloc(sizeof(prev));
	if (node == NULL || prev == NULL)
		return (-1);

	node = *head;
	i = 0;

	while (node != NULL)
	{
		if (idx == i - 1)
			prev = node;
		if (idx == i)
		{
			prev->next = node->next;
			printf("Deleting node...");
			free(node);
			return (1); 
		}
		node = node->next;
		i++;
	}

	return (-1);
}
