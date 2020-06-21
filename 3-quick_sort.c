#include "sort.h"
int partition(int arr[], int, int, size_t);
void sort_func(int arr[], int, int, size_t);
void shift(int *a, int *b);
/**
 * quick_sort - sorts a list of integers in ascending order
 * @array: array of integer
 * @size: number of elements in the array
 */
void quick_sort(int *array, size_t size)
{
	sort_func(array, 0, size - 1, size);
}
/**
 * partition- index
 * @arr: int []
 * @l: int
 * @h: int
 * @size: int
 * Return: int
 */
int partition(int arr[], int l, int h, size_t size)
{
	int pivot;
	int i, j;

	pivot = arr[h], i = l;
	for (j = l; j < h; j++)
	{
		if (arr[j] <= pivot)
		{
			shift(&arr[i], &arr[j]);
			i++;
			print_array(arr, size);
		}
	}
	shift(&arr[i], &arr[h]);
	print_array(arr, size);
	return (i);
}
/**
 * sort_func - sort int
 * @arr: int[]
 * @l: int
 * @h: int
 * @n: int
 */
void sort_func(int arr[], int l, int h, size_t n)
{
	int pindex;

	if (l < h)
	{
		pindex = partition(arr, l, h, n);
		sort_func(arr, l, pindex - 1, n);
		sort_func(arr, pindex + 1, h, n);
	}
}
/**
 * shift - swap int
 * @a: int
 * @b: int
 */
void shift(int *a, int *b)
{
	int swap = 0;

	swap = *a;
	*a = *b;
	*b = swap;
}
