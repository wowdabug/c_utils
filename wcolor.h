#ifndef WCOLOR_H
#define WCOLOR_H

#include <stdint.h>
#include <stdbool.h>
#include <string.h>
#include <stdio.h>

#define print_color(X) _Generic((X), \
	RGB *: print_rgb, \
	RGBA *: print_rgba, \
	HSV *: print_hsv, \
	HSL *: print_hsl \
)(X)

typedef struct RGB {
	uint8_t r;
	uint8_t g;
	uint8_t b;
} RGB;

typedef struct RGBA {
	uint8_t r;
	uint8_t g;
	uint8_t b;
	uint8_t a;
} RGBA;

typedef struct HSV {
	float h;
	float s;
	float v;
} HSV;

typedef struct HSL {
	float h;
	float s;
	float l;
} HSL;

void print_rgb(RGB *c);
void print_rgba(RGBA *c);
void print_hsv(HSV *c);
void print_hsl(HSL *c);

bool hex_to_rgb(const char *hex, RGB *rgb);
bool hex_to_rgba(const char *hex, RGBA *rgba);

#endif
