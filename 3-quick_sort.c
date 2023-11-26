#include "sort.h"

/**
 * swap_element - Swaping two items or two elements in an array.
 * @array: The array to modify.
 * @L: The index of the left item.
 * @R: The index of the right item.
 */
void swap_element(int *array, size_t L, size_t R)
{
	int temporary;

	if (array != NULL)
	{
		temporary = array[L];
		array[L] = array[R];
		array[R] = temporary;
	}
}

/**
 * quick_sort_range_lomuto - Sorts a Sub--Array using the
 * quick sort algorithm and Lomuto's partition. scheme.
 * @array: The array containing sub array.
 * @low: Start position of the sub -array.
 * @high: Ending position of the sub -array.
 * @size: The length of the arrray.
 */
void quick_sort_range_lomuto(int *array, size_t low, size_t high, size_t size)
{
	size_t h, a;
	int pivot;

	if ((low >= high) || (array == NULL))
		return;
	pivot = array[high];
	h = low;
	for (a = low; a < high; a++)
	{
		if (array[a] <= pivot)
		{
			if (h != a)
			{
				swap_element(array, h, a);
				print_array(array, size);
			}
			h++;
		}
	}
	if (h != high)
	{
		swap_element(array, h, high);
		print_array(array, size);
	}
	if (h - low > 1)
		quick_sort_range_lomuto(array, low, h - 1, size);
	if (high - h > 1)
		quick_sort_range_lomuto(array, h + 1, high, size);
}

/**
 * quick_sort - Sorting an array using the quick sort algorithm
 * and Lomuto's partition scheme.
 * @array: The arrray to be sorted.
 * @size: The length of the array.
 */
void quick_sort(int *array, size_t size)
{
	if (array != NULL)
	{
		quick_sort_range_lomuto(array, 0, size - 1, size);
	}
}
