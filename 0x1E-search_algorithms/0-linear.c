#include "search_algos.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * linear_search - function searches for array value
 * @array: the array to search the value
 * @size: searches for array size
 * @value: searches for value
 *
 * Return: returns the index value
 */
int linear_search(int *array, size_t size, int value)
{
	size_t k = 0;

	if (!array || size == 0)
		return (-1);

	while (k < size)
	{
		printf("Value checked array[%lu] = [%d]\n", k, array[k]);
		if (array[k] == value)
			return (k);
		k++;
	}

	return (-1);
}
