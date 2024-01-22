#include "sort.h"
/**
 * selection_sort - function takes an integer array
 * @array: parameter is a pointer to the first element of the array.
 * @size: number of elements in the array.
 * Return: void.
*/
void selection_sort(int *array, size_t size)
{
	size_t i, j;
	int swap;
	unsigned int tmp, idx;

	if (!array || size < 2)
		return;
	for (i = 0; i < size; i++)
	{
		swap = array[i];
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < swap)
			{
				idx = j;
				swap = array[j];
				tmp = array[i];
			}
		}
		if (swap != array[i])
		{
			array[i] = swap;
			array[idx] = tmp;
			print_array(array, size);
		}
	}
}

