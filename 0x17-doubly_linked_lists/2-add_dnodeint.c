#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
*add_dnodeint - add node at beginning
*@head: list head
*@n: value to add
*Return: added node
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_head = malloc(sizeof(dlistint_t));

	if (new_head == NULL)
	{
		return (NULL);
	}

	new_head->n = n;
	new_head->prev = NULL;
	new_head->next = *head;

	*head = new_head;

	return (new_head);
}
