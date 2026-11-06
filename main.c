#include <stdlib.h>
#include <stdio.h>

#include "wdbint.h"
#include "wdbmath.h"

int main(void) {
	printf("%s%.3f\n", "The value of pi is: ", PI);
	printf("%s%llu\n", "The factorial of 7 is: ", factorial(7));
	printf("%s%llu%s\n", "There are ", comb(6, 4), " combinations when choosing 4 items from 6");
	printf("%s%d\n", "The sign of 2.5 is: ", sgn(2.5));

	return EXIT_SUCCESS;
}
