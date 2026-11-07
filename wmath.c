#include "wmath.h"

const unsigned long long factorials[] = {
	1,
	1,
	2,
	6,
	24,
	120,
	720,
	5040,
	40320,
	362880,
	3628800,
	39916800,
	479001600,
	6227020800,
	87178291200,
	1307674368000,
	20922789888000,
	355687428096000,
	6402373705728000,
	121645100408832000,
	2432902008176640000
};

unsigned long long perm(unsigned int n, unsigned int r) {
	if (r > n) { return 0; }
	if (r == 0) { return 1; }

	unsigned long long x = 1;

	for (unsigned int i = 0; i < r; ++i) {
        x *= n - i;
    }

	return x;
}

unsigned long long comb(unsigned int n, unsigned int r) {
	if (r > n) { return 0; }
	if (r == 0 || r == n) { return 1; }
	if (r > n - r) { r = n - r; }

	unsigned long long x = 1;

    for (unsigned int i = 1; i <= r; i++) {
        x = x * (n - i + 1) / i;
    }

    return x;
}
