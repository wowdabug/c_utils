#include "wint.h"
#include "wmath.h"
#include "wvec.h"

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

int main(void) {
	test_wint();
	test_wmath();
	test_wvec();

	return EXIT_SUCCESS;
}
