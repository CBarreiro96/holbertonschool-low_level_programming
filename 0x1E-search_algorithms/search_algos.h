#ifndef SEARCH_ALGORITHM
#define SEARCH_ALGORITHM

#include <stdio.h>

/*Auxiliar Prototype*/
void print_array(int *array, int begin, int final);

/*Prototypes*/
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);






#endif /*SEARCH_ALGORITHM*/
