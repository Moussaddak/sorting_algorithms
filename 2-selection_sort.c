#include "sort.h"
/**
 * selection_sort - sorts a list of integers in ascending order
 * @array: array of integer
 * @size: number of elements in the array
 */
void selection_sort(int *array, size_t size)
{
	int i, j, index, swap;

	if (!array)
		return;

	for (i = 0; i < (int)size - 2; i++)
	{
		index = i;
		for (j = i + 1; j < (int)size; j++)
		{
			if (array[j] < array[index])
				index = j;
		}
		swap = array[index];
		array[index] = array[i];
		array[i] = swap;
		print_array(array, size);
	}
}
