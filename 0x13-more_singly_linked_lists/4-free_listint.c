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

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
