#include "search_algos.h"

/**
  * jump_search - the function searches for a sorted array value.
  * @array: points to the first element to be searched.
  * @size: number of elements from the array.
  * @value: value being searched.
  * Return: the value returned is NULL or -1.
  * Description: array prints a value every time it is compared.
  */
int jump_search(int *array, size_t size, int value)
{
	size_t k, jump, step;

	if (array == NULL || size == 0)
		return (-1);

	step = sqrt(size);
	for (k = jump = 0; jump < size && array[jump] < value;)
	{
		printf("Value checked array[%ld] = [%d]\n", jump, array[jump]);
		k = jump;
		jump += step;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", k, jump);

	jump = jump < size - 1 ? jump : size - 1;
	for (; k < jump && array[k] < value; k++)
		printf("Value checked array[%ld] = [%d]\n", k, array[k]);
	printf("Value checked array[%ld] = [%d]\n", k, array[k]);

	return (array[k] == value ? (int)k : -1);
}
