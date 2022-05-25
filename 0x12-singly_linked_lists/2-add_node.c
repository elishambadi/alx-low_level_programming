#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 *add_node - create and add a node before head
 *@head: list head pointer
 *@str: node value
 *
 *Return: new node
 */

list_t *add_node(list_t **head, const char *str)
{
	char *string;
	unsigned int len;

	list_t *node = NULL;

	string = malloc(sizeof(str));
	strcpy(string, str);

	node = malloc(sizeof(list_t));

	if (node == NULL)
	{
		return (NULL);
	}
	len = strlen(string);

	node->str = string;
	node->next = *head;
	node->len = len;
	*head = node;

	return (*head);
}
