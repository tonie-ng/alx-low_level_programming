#include "search_algos.h"

/**
 * linear_search - searches for a value in a sorted array of integers
 * @array: sorted array to find value in
 * @size: size of the array
 * @value: the value to find
 *
 * Return: the value if found or -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array == NULL)
		return (-1);

	while (i < size)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);

		if (*(array + i) == value)
			return (i);
		i++;
	}
	return (-1);
}
