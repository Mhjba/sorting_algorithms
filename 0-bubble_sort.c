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
	unsigned int idx = 0, j = 0;
	int temp;

	if (size <= 1)
		return;

	for (idx = 0; idx < (size - 1); idx++)
	for (j = 0; j < (size - idx - 1); j++)
	if (array[j] > array[j + 1])
	{
		temp = array[j];
		array[j] = array[j + 1];
		array[j + 1] = temp;
		print_array(array, size);
	}
	size--;
}
