#ifndef HEAP_SORT_H
#define HEAP_SORT_H

/* Native library */
#include <stdlib.h>
#include <stdio.h>

/* My own functions */
void print_array(const int *array, size_t size);
void heap_sort(int *array, size_t size);
void shift_down(int *array, int size, int i, int size_array);
void swap_int(int *a, int *b);
int check_sort(int *array, int size);

#endif /* heap sort algorithm */
