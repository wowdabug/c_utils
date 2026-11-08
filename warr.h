#ifndef WARR_H
#define WARR_H

#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>

typedef struct Arr {
	float *data;
	size_t size;
	size_t capacity;
} Arr;

void print_arr(Arr *arr);

void init_arr(Arr *arr);
void free_arr(Arr *arr);

bool push(Arr *arr, int item);
float pop(Arr *arr);

#endif
