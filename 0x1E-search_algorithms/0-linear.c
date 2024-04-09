#include "search_algos.h"

/**
 * linear_search - Performs a linear search within an integer array.
 *
 * This function searches for a specific integer value within an integer array
 * using a linear search algorithm.
 *
 * @array: Pointer to the first element of the array to be searched.
 * @size: The size of the array, indicating the number of elements.
 * @value: The integer value to be searched within the array.
 *
 * Return: If the value is found,
 * the function returns the index of the first occurrence
 * of the value within the array. If the value is not found, it returns -1.
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
