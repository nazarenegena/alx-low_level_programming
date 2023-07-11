#include "search_algos.h"

/**
  * binary_search - function searches for a value in int sorted array.
  * @array: array pointer to first element of searched array.
  * @size: size of number of array elements.
  * @value: value to be searched.
  * Return: returns value if NULL, or -1.
  * Description: returns array searched.
  */
int binary_search(int *array, size_t size, int value)
{
	size_t k, left, right;

	if (array == NULL)
		return (-1);

	for (left = 0, right = size - 1; right >= left;)
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
