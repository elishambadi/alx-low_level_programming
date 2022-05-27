#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 *pop_listint - remove head node
 *This can be considered a simulation of a stack
 *@head: list head
 *
 *Return: value of head node int
 */

int pop_listint(listint_t **head)
{
	int n;
	listint_t *temp, *next;

	if (head == NULL)
	{
		return (0);
	}

	temp = malloc(sizeof(temp));
	next = malloc(sizeof(next));
	if (temp == NULL || next == NULL)
	{
		return (NULL);
	}

	temp = *head;
	n = temp->n;
	next = temp->next;

	free(temp);
	*head = next;
	free(next);
}
