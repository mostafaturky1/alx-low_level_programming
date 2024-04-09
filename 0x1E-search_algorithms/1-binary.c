#include "search_algos.h"

/**
 * binary_search - Performs a binary search within a sorted integer array.
 *
 * This function searches for a specific integer value within a sorted integer
 * array using the binary search algorithm.
 *
 * @array: Pointer to the first element of the sorted array to be searched.
 * @size: The size of the array, indicating the number of elements.
 * @value: The integer value to be searched within the array.
 *
 * Return: If the value is found,
 * the function returns the index of the first occurrence
 * of the value within the array. If the value is not found, it returns -1.
 */

int binary_search(int *array, size_t size, int value)
{
	size_t i = 0, j = size - 1, m, k;

	if (array == NULL)
		return (-1);
	while (i <= j)
	{
		printf("Searching in array: ");
		for (k = i; k < j; k++)
			printf("%d, ", array[k]);
		printf("%d\n", array[k]);
		m = (i + j) / 2;
		if (array[m] == value)
			return (m);
		if (array[m] < value)
			i = m + 1;
		if (array[m] > value)
			j = m - 1;
	}
	return (-1);
}
