#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H
#include <stdio.h>
#include <math.h>
#define SIZE 1024


/*search algorithms headerfiles*/

int binary_search2(int *array, int left, int right, int value);
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
void print_array(int *arr, int lower, int upper);
int jump_search(int *array, size_t size, int value);
int recursive_interpolation(int *array, int Low, int High, int search, int dflt);
int interpolation_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);


#endif
