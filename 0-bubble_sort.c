#include "sort.h"

/**
 * bubble_sort - function sorts the array in ascending
 * order using the Bubble Sort algorithm.
 * @array: parameter is a pointer to the first element of an array of integers
 * @size:parameter is the number of elements in the array.
 * Return: void.
 *
*/

void bubble_sort(int *array, size_t size)
{
	unsigned int idx = 0, sort = 0;
	int swap;

	if (size <= 1 || array == NULL)
		return;

	for (idx = 0; idx < (size - 1); idx++)
	{
		for (sort = 0; sort < (size - idx - 1); sort++)
		{
			if (array[sort] > array[sort + 1])
			{
				swap = array[sort];
				array[sort] = array[sort + 1];
				array[sort + 1] = swap;
				print_array(array, size);
			}
		}
	}
}

