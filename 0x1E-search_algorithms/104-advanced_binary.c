#include "search_algos.h"

/**
  * advanced_binary_recursive - function searches recursively for array.
  * @array: array points to the first element of [sub]array to search.
  * @right: ending the index [sub]array to search.
  * @left: starting index of [sub]array to search.
  * @value: shows value to search.
  * Return: returns value if not present, -1.
  * Description: the [sub]array being searched is printed.
  */
int advanced_binary_recursive(int *array, size_t left, size_t right, int value)
{
	size_t k;

	if (right < left)
		return (-1);

	printf("Searching in array: ");
	for (k = left; k < right; k++)
		printf("%d, ", array[k]);
	printf("%d\n", array[k]);

	k = left + (right - left) / 2;
	if (array[k] == value && (k == left || array[k - 1] != value))
		return (k);
	if (array[k] >= value)
		return (advanced_binary_recursive(array, left, k, value));
	return (advanced_binary_recursive(array, k + 1, right, value));
}

/**
  * advanced_binary - function searches for value in a sorted array
  * @array: the array pointer to first element of array to search.
  * @size: size of number of elements in the array.
  * @value: shows the value to search.
  * Return: returns the value is not present or the array is NULL.
  * Description: Prints the [sub]array being searched for.
  */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);

	return (advanced_binary_recursive(array, 0, size - 1, value));
}
