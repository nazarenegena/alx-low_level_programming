#include "search_algos.h"

/**
  * _binary_search - function searches for values sorted arrays.
  * @array: the pointer to first element of the searched array.
  * @right: right ending index of [sub]array being searched.
  * @left:  starting index of [sub]array being searched.
  * @value: shows the value being searched.
  * Return: returns the value if NULL, -1.
  * Description: after each change the [sub]array searched is printed.
  */
int _binary_search(int *array, size_t left, size_t right, int value)
{
	size_t k;

	if (array == NULL)
		return (-1);

	while (right >= left)
	{
		printf("Searching in array: ");
		for (k = left; k < right; k++)
			printf("%d, ", array[k]);
		printf("%d\n", array[k]);

		k = left + (right - left) / 2;
		if (array[k] == value)
			return (k);
		if (array[k] > value)
			right = k - 1;
		else
			left = k + 1;
	}

	return (-1);
}

/**
  * exponential_search - function Searches for value in the sorted array.
  * @array: points to the first element of the array to search.
  * @size: number of elements in array.
  * @value: value to search.
  * Return: returns value not present in the array is NULL.
  * Description: the value prints when it is compared in the array.
  */
int exponential_search(int *array, size_t size, int value)
{
	size_t k = 0, right;

	if (array == NULL)
		return (-1);

	if (array[0] != value)
	{
		for (k = 1; k < size && array[k] <= value; k = k * 2)
			printf("Value checked array[%ld] = [%d]\n", k, array[k]);
	}

	right = k < size ? k : size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", k / 2, right);
	return (_binary_search(array, k / 2, right, value));
}
