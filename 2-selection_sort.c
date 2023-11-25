#include "sort.h"
#include <stdio.h>


/**
 * selection_sort - sorting an giving array of integers in ascending order
 * @array: The array
 * @size: The size of the giving array
 *
 * Return: void
 */
void selection_sort(int *array, size_t size)
{
	size_t j, stp, min_indx;
	int temp;

	for (stp = 0; stp < size - 1; stp++)
	{
		min_indx = stp;
		for (j = stp + 1; j < size; j++)
		{
			if (array[j] < array[min_indx])
				min_indx = j;
		}

		if (min_indx != stp)
		{
			temp = array[stp];
			array[stp] = array[min_indx];
			array[min_indx] = temp;
			print_array(array, size);
		}
	}
}
