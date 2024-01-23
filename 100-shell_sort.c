#include "sort.h"

/**
 * shell_sort - Sorts an array of integers in asc using shell sort.
 * @array: the array.
 * @size: the size.
 * Return: void.
 */
void shell_sort(int *array, size_t size)
{
	size_t Knuth, i, tmp;
	int swap;

	if (array == NULL || size < 2)
		return;
	Knuth = 0;
	while (Knuth < size / 3)
		Knuth = Knuth * 3 + 1;

	while (Knuth > 0)
	{
		for (i = Knuth; i < size; i++)
		{
			swap = array[i];
			for (tmp = i; tmp >= Knuth && array[tmp - Knuth] > swap; tmp -= Knuth)
				array[tmp] = array[tmp - Knuth];
			array[tmp] = swap;
		}
		Knuth /= 3;
		print_array(array, size);
	}
}
