#include "sort.h"

/**
 * lomuto_sort - function for quick_sort
 * @array: the array.
 * @le: left.
 * @ri: right.
 * @size: size of the array.
 * Return: void
 */
void lomuto_sort(int *array, int le, int ri, size_t size)
{
	int pivot;

	if (le < ri)
	{
		pivot = partition(array, le, ri, size);
		lomuto_sort(array, le, pivot - 1, size);
		lomuto_sort(array, pivot + 1, ri, size);
	}
}

/**
 * partition - partitions an array using Lomuto partition.
 * @array: the array.
 * @le: left.
 * @ri: right.
 * @size: size of the array.
 *
 * Return: index of the pivot element
 */
int partition(int *array, int le, int ri, size_t size)
{
	int idx, tmp;
	int pivot, swap;

	idx = le - 1;
	for (tmp = le; tmp <= ri - 1; tmp++)
	{
		pivot = array[ri];
		if (array[tmp] <= pivot)
		{
			idx++;
			if (idx != tmp)
			{
				swap = array[idx];
				array[idx] = array[tmp];
				array[tmp] = swap;
				print_array(array, size);
			}
		}
	}
	if (idx + 1 != ri)
	{
		swap = array[idx + 1];
		array[idx + 1] = array[ri];
		array[ri] = swap;
		print_array(array, size);
	}
	return (idx + 1);
}
/**
 * quick_sort - sorts an array of integers .
 * @array: the array .
 * @size: the size .
 * Return : void.
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;

	lomuto_sort(array, 0, size - 1, size);
}

