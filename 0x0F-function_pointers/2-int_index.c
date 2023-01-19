#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 * int_index - search for an interger
 * @array: pointer to array
 * @size: size of array
 * @cmp: function to compare matches
 * Return: index of first match
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (size <= 0 || array == NULL || cmp == NULL)
return (-1);
for (i = 0; i < size; i++)
{
if (cmp(array[i]))
return (i);
}
return (-1);
}
