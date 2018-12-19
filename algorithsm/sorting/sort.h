#ifndef SORT_H
#define SORT_H

#include <stdio.h>
#include <stdlib.h>

/**
 * Sort the input integer array using merge sort.
 *
 * @param nums  the array to be sorted
 * @param size  the size of array
 */
void merge_sort(int *nums, int size);

/**
 * Sort the input integer array using quick sort.
 *
 * @param nums  the array to be sorted
 * @param size  the size of array
 */
void quicksort(int *nums, int size);

#endif // SORT_H
