#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 *sum_listint - sum all elements in the list
 *@head: start of list
 *
 *Return: sum
 */

int sum_listint(listint_t *head)
{
	size_t i;
	unsigned int sum;

	i = 0;
	sum = 0;
	if (head == NULL)
	{
		return (0);
	}
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
		i++;
	}

	return (sum);
}
