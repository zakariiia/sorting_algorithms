#ifndef SORT_H
#define SORT_H


#include <stddef.h>
#include <stdlib.h>


/**
 * struct listint_s - The Doubly linked list node
 *
 * @n: An Integer stored in the node
 * @prev: A Pointer to the previous element of the list
 * @next: A Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

/* Print Functions (2) */

void print_array(const int *array, size_t size);
void print_list(const listint_t *list);


/* Sorting Algorithms Functions (4) */

void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);


/* Advanced Tasks (8) */
void shell_sort(int *array, size_t size);
void cocktail_sort_list(listint_t **list);
void counting_sort(int *array, size_t size);
void merge_sort(int *array, size_t size);
void heap_sort(int *array, size_t size);
void radix_sort(int *array, size_t size);
void bitonic_sort(int *array, size_t size);
void quick_sort_hoare(int *array, size_t size);

#endif /* SORT_H */
