#ifndef LIST_H
#define LIST_H

/* libraries */
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

/* prototypes */

void heap_sort(int *arr, size_t size);
void print_array(const int *array, size_t size);
void get_heap(int *array, int i, int size, int len);
void fn_swap(int *a, int *b);

#endif /*LIST_H*/
