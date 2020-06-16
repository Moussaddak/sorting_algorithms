#include "sort.h"
/**
 * bubble_sort - sorts an array of integers in ascending order
 * @array: array of integer
 * @size: number of elements of the array
 */
void bubble_sort(int *array, size_t size)
{
	int inv = 1, i, swap;

	if (!array)
		return;
	while (inv)
	{
		inv = 0;
		for (i = 0; (size_t) i < size - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				inv = 1;
				swap = array[i];
				array[i] = array[i + 1];
				array[i + 1] = swap;
				print_array(array, size);
			}
		}
	}
}
