#include "wcolor.h"

const uint8_t hex_table[256] = {
	['0'] = 1,
	['1'] = 2,
	['2'] = 3,
	['3'] = 4,
	['4'] = 5,
	['5'] = 6,
	['6'] = 7,
	['7'] = 8,
	['8'] = 9,
	['9'] = 10,
	['A'] = 11,
	['B'] = 12,
	['C'] = 13,
	['D'] = 14,
	['E'] = 15,
	['F'] = 16,
	['a'] = 11,
	['b'] = 12,
	['c'] = 13,
	['d'] = 14,
	['e'] = 15,
	['f'] = 16
};

void print_rgb(RGB *c) {
	printf("RGB { r: %d, g: %d, b: %d }\n", c->r, c->g, c->b);
}

void print_rgba(RGBA *c) {
	printf("RGBA { r: %d, g: %d, b: %d, a: %d }\n", c->r, c->g, c->b, c->a);
}

void print_hsv(HSV *c) {
	printf("HSV { r: %f, g: %f, b: %f }\n", c->h, c->s, c->v);
}

void print_hsl(HSL *c) {
	printf("HSL { r: %f, g: %f, b: %f }\n", c->h, c->s, c->l);
}

static bool hex_pair(char h, char l, uint8_t *out) {
	const uint8_t hv = hex_table[(unsigned char)h];
	const uint8_t lv = hex_table[(unsigned char)l];

	if (!hv || !lv) {
		return 0;
	}

	*out = ((hv - 1) << 4) + (lv - 1);
	return 1;
}

static bool hex_pair_short(char c, uint8_t *out) {
	uint8_t cv = hex_table[(unsigned char)c];

	if (!cv) {
		return 0;
	}

	cv -= 1;

	*out = (cv << 4) + cv;
	return 1;
}

bool hex_to_rgb(const char *hex, RGB *rgb) {
	if (hex == NULL || rgb == NULL) {
		return 0;
	}

	const size_t len = strlen(hex);

	if (hex[0] != '#') {
		return 0;
	}

	if (len == 7) {
		return
			hex_pair(hex[1], hex[2], &rgb->r) &&
			hex_pair(hex[3], hex[4], &rgb->g) &&
			hex_pair(hex[5], hex[6], &rgb->b);
	}

	if (len == 4) {
		return
			hex_pair_short(hex[1], &rgb->r) &&
			hex_pair_short(hex[2], &rgb->g) &&
			hex_pair_short(hex[3], &rgb->b);
	}

	return 0;
}

bool hex_to_rgba(const char *hex, RGBA *rgba) {
	if (hex == NULL || rgba == NULL) {
		return 0;
	}

	const size_t len = strlen(hex);

	if (hex[0] != '#') {
		return 0;
	}

	if (len == 9) {
		return
			hex_pair(hex[1], hex[2], &rgba->r) &&
			hex_pair(hex[3], hex[4], &rgba->g) &&
			hex_pair(hex[5], hex[6], &rgba->b) &&
			hex_pair(hex[7], hex[8], &rgba->a);
	}

	if (len == 5) {
		return
			hex_pair_short(hex[1], &rgba->r) &&
			hex_pair_short(hex[2], &rgba->g) &&
			hex_pair_short(hex[3], &rgba->b) &&
			hex_pair_short(hex[4], &rgba->a);
	}

	return 0;
}
