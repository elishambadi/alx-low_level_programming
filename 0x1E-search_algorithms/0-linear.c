#include "search_algos.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * linear_search - searching arrays using linear search
  * @array: pointer to first array element
  * @size: number of elements in array
  * @value: value to search for
  * Return: The first index where value is located
  */

int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array == NULL)
		return (-1);

	for (; i < size; ++i)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);

		if (array[i] == value)
			break;
	}

	if (i == size)
		return (-1);

	return (i);
}
