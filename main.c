#include "wint.h"
#include "wmath.h"
#include "wvec.h"
#include "wcolor.h"
#include "wver.h"
#include "warr.h"

#include <stdlib.h>
#include <stdio.h>

void test_wint(void) {
	i32 x = 5;

	printf("The value of x is: %d\n", x);
	printf("The size of x is %zu bytes.\n", sizeof(x));
}

void test_wmath(void) {
	printf("The value of pi is: %.3f\n", PI);
	printf("The factorial of 7 is: %llu\n", fact(7));
	printf("nPc(6, 4) = %llu\n", comb(6, 4));
	printf("The sign of 2.5 is: %d\n", sgn(2.5));
}

void test_wvec(void) {
	Vec2 v = {0};
	print_vec(&v);
}

void test_wcolor(void) {
	RGB rgb = {0};
	if (hex_to_rgb("#FF0000", &rgb)) {
		print_color(&rgb);
	}

	RGBA rgba = {0};
	if (hex_to_rgba("#FF000000", &rgba)) {
		print_color(&rgba);
	}
}

void test_wver(void) {
	printf("The current C version is from %d.\n", C_VERSION);
}

void test_warr(void) {
	Arr arr;
	init_arr(&arr);

	push(&arr, 1);
	print_arr(&arr);
	pop(&arr);
	print_arr(&arr);

	free_arr(&arr);
}

int main(void) {
	test_wint();
	test_wmath();
	test_wvec();
	test_wcolor();
	test_wver();
	test_warr();

	return EXIT_SUCCESS;
}
