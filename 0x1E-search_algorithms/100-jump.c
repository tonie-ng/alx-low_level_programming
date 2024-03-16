#include "search_algos.h"

/**
 * jump_search - Implementation of the jump step algorithm
 * @array: array to be searched.
 * @size: size of the array.
 * @value: value to search for.
 *
 * Return: The index of the value in the array or 0.
 */
int jump_search(int *array, size_t size, int value)
{

	int low, high;
	size_t step;
	int s;

	if (array == NULL)
	{
		return (-1);
	}
	step = sqrt(size);
	high = step, s = size, low = 0;
	while (array[high] < value && step < size)
	{
		printf("Value checked array[%d] = [%d]\n", low, array[low]);
		low = step;
		high += step;
		if (high > (s - 1))
		{
			return (-1);
		}
	}
	printf("Value found between indexes [%d] and [%d]\n", low, high);
	while (low <= high)
	{
		printf("Value checked array[%d] = [%d]\n", low, array[low]);
		if (array[low] == value)
		{
			return (low);
		}
		low++;
	}
	return (-1);
}

