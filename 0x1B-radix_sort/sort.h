#ifndef RADIX_SORT_H
#define RADIX_SORT_H
#include <stdio.h>
#include <stdlib.h>

void print_array(const int *array, size_t size);
void radix_sort(int *array, size_t size);
int obtain_max(int *array, size_t size);
void counting(int *array, int size, int exp);

#endif /* RADIX_SORT_H */
