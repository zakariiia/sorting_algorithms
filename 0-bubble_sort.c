#include "sort.h"
#include <stdio.h>

/**
 * bubble_sort - sorts an array of integers in an ascending order
 *
 * @array: The array of integers
 * @size: The sizee of the array
 *
 * Return: void
 */
void bubble_sort(int *array, size_t size)
{
	size_t j;
	int tempo, sorted_elm;

	if (!array || size == 0)
		return;

	do {
		sorted_elm = 1;
		for (j = 0; j < size - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				sorted_elm = 0;
				tempo = array[j];
				array[j] = array[j + 1];
				array[j + 1] = tempo;
				print_array(array, size);
			}
		}

	} while (sorted_elm == 0);
}
