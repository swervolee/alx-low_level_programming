#ifndef SEARCH_ALGOS
#define SEARCH_ALGOS
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/*search algorithms headerfiles*/


int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
void print_array(int *arr, int lower, int upper);




#endif
