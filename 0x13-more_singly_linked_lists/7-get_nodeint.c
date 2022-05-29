#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 *get_nodeint_at_index - find node at index
 *@head: list head
 *@index: index of node
 *
 *Return: node found
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *node;

	node = malloc(sizeof(node));
	if (node == NULL)
	{
		return (NULL);
	}

	node = head;
	i = 0;

	while (node != NULL)
	{
		if (index == i)
			return (node);
		node = node->next;
		i++;
	}

	return (NULL);
}
