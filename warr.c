#include "warr.h"

void print_arr(Arr *arr) {
	printf("Arr { data: {");

	bool first = true;
	for (size_t i = 0; i < arr->size; ++i) {
		if (first) {
			first = false;
		} else {
			putchar(',');
		}

		printf(" %.0f", arr->data[i]);
	}

	printf(" } size: %zu, capacity: %zu }\n", arr->size, arr->capacity);
}

void init_arr(Arr *arr) {
	arr->data = NULL;
	arr->size = 0;
	arr->capacity = 0;
}

void free_arr(Arr *arr) {
	free(arr->data);
}

bool push(Arr *arr, int item) {
	++arr->size;

	if (arr->size > arr->capacity) {
		const size_t prev_cap = arr->capacity;

		if (prev_cap) {
			arr->capacity *= 2;
		} else {
			arr->capacity = 8;
		}

		float *temp = (float *)realloc(arr->data, arr->capacity * sizeof(float));

		if (!temp) {
			--arr->size;
			arr->capacity = prev_cap;
			return 0;
		}

		arr->data = temp;
	}

	arr->data[arr->size - 1] = item;
	return 1;
}

float pop(Arr *arr) {
	--arr->size;

	const float item = arr->data[arr->size];
	arr->data[arr->size] = 0;

	if (arr->size << 2 < arr->capacity) {
		const size_t prev_cap = arr->capacity;

		arr->capacity = prev_cap / 2;

		float *temp = (float *)realloc(arr->data, arr->capacity * sizeof(float));

		if (!temp) {
			++arr->size;
			arr->capacity = prev_cap;
			return 0;
		}

		arr->data = temp;
	}

	return item;
}
