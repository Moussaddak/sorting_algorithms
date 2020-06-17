#include "sort.h"
int partition(int arr[], int l, int h);
void sort_func(int arr[], int l, int h);
void shift(int *a, int *b);
/**
 * quick_sort - sorts a list of integers in ascending order
 * @array: array of integer
 * @size: number of elements in the array
 */
void quick_sort(int *array, size_t size)
{
	sort_func(array, 0, size);
}
/**
 * partition- index
 * @arr: int []
 * @l: int
 * @h: int
 * Return: int
 */
int partition(int arr[], int l, int h)
{
	int pivot;
	int i;

	pivot = arr[h], i = (l - 1);

	for (int j = l; j <= h - 1; j++)
	{
		if (arr[j] <= pivot)
		{
			i++;
			shift(&arr[i], &arr[j]);
		}
	}
	shift(&arr[i + 1], &arr[h]);
	return (i + 1);
}
/**
 * sort_func - sort int
 * @arr: int[]
 * @l: int
 * @h: int
 */
void sort_func(int arr[], int l, int h)
{
	int pindex;

	if (l < h)
	{
		pindex = partition(arr, l, h);
		sort_func(arr, l, pindex);
		sort_func(arr, pindex + 1, h);
	}
}
/**
 * shift - swap int
 * @a: int
 * @b: int
 */
void shift(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
