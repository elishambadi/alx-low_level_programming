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

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *node, *temp;

	node = malloc(sizeof(node));
	temp = malloc(sizeof(temp));
	if (node == NULL || temp == NULL)
	{
		return (NULL);
	}

	node = *head;
	i = 0;

	temp->n = n;

	while (node != NULL)
	{
		if (idx == i - 1)
		{
			temp = node->next;
		}
		if (idx == i)
		{
			temp->next = node;
			printf("Returning node...\n");
			return (temp);
		}
		node = node->next;
		i++;
	}

	return (NULL);
}
