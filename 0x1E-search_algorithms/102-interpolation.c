#include "search_algos.h"

/**
  * interpolation_search - function searches for sorted value array.
  * @array: array pointer for the first element of the search array.
  * @size: number of elements in the array.
  * @value: value being searched for.
  * Return: returns value if not NULL.
  * Description: value printed every time it is compared in array..
  */
int interpolation_search(int *array, size_t size, int value)
{
	size_t i, k, r;

	if (array == NULL)
		return (-1);

	for (k = 0, r = size - 1; r >= k;)
	{
		i = k + (((double)(r - k) / (array[r] - array[k])) * (value - array[k]));
		if (i < size)
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		else
		{
			printf("Value checked array[%ld] is out of range\n", i);
			break;
		}

		if (array[i] == value)
			return (i);
		if (array[i] > value)
			r = i - 1;
		else
			k = i + 1;
	}

	return (-1);
}
