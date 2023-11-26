#include "sort.h"
#include <stdio.h>
/**
 * _swap_val - swaped 2 values or elements.
 * @array: the array for swap him values.
 * @a: First index
 * @b: Second index
 * Return: Nothing
 */
void _swap_val(int *array, int a, int b)
{
	int temp;

	if (array[a] != array[b])
	{
		temp = array[a];
		array[a] = array[b];
		array[b] = temp;
	}
}

/**
 * shell_sort - sort the list and print the performed changes.
 * @array: The array to sort.
 * @size: The size of the array.
 * Return: Nothing
 */
void shell_sort(int *array, size_t size)
{
	size_t k = 0,  i, j;

	if (size < 2)
		return;

	while (k <= size / 3)
		k = k * 3 + 1;

	while (k >= 1)
	{
		for (i = k; i < size; i++)
			for (j = i; j >= k && array[j] < array[j - k]; j -= k)
				_swap_val(array, j, j - k);
		k /= 3;
		print_array(array, size);
	}
}
