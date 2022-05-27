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

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
	{
		return (NULL);
	}

	node->n = n;
	node->next = *head;
	*head = node;

	return (node);
}
