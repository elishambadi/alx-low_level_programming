#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 *add_nodeint_end - print all elements on list
 *@head: head of list
 *@n: var to be added
 *
 *Return: node obj
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node = NULL;
	
	node = malloc(sizeof(node));
	if (node == NULL)
	{
		return (NULL);
	}

	node->n = n;
	node->next = *head;
	*head = node; /*Set head to point to added node*/

	return (node);
}
