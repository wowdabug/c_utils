#ifndef WMATH_H
#define WMATH_H

#include <math.h>

#define E 2.7182818284590452
#define EULER_GAMMA 0.57721566490153286
#define FRAC_1_PI 0.31830988618379067
#define FRAC_1_SQRT_2 0.70710678118654752
#define FRAC_2_PI 0.63661977236758134
#define FRAC_2_SQRT_PI 1.1283791670955125
#define FRAC_PI_2 1.5707963267948966
#define FRAC_PI_3 1.0471975511965977
#define FRAC_PI_4 0.78539816339744830
#define FRAC_PI_6 0.52359877559829887
#define FRAC_PI_8 0.39269908169872415
#define GOLDEN_RATIO 1.6180339887498948
#define LN_2 0.69314718055994530
#define LN_10 2.3025850929940456
#define LOG2_10 3.3219280948873623
#define LOG2_E 1.4426950408889634
#define LOG10_2 0.30102999566398119
#define LOG10_E 0.43429448190325182
#define PI 3.1415926535897932
#define SQRT_2 1.4142135623730950
#define TAU 6.2831853071795864
#define FRAC_1_SQRT_3 0.57735026918962576
#define FRAC_1_SQRT_5 0.44721359549995793
#define FRAC_1_SQRT_2PI 0.39894228040143267
#define FRAC_1_SQRT_PI 0.56418958354775628
#define SQRT_3 1.7320508075688772
#define SQRT_5 2.2360679774997896

#define SGN(X) (((X) > 0) - ((X) < 0))

#define sgn(X) _Generic((X), \
	int: sgni, \
	long: sgnl, \
	long long: sgnll, \
	float: sgnf, \
	double: sgnd, \
	long double: sgnld \
)(X)

#define sigm(X) _Generic((X), \
	float: sigmf, \
	double: sigmd, \
	long double: sigmld \
)(X)

extern const unsigned long long factorials[];

unsigned long long perm(unsigned int n, unsigned int r);
unsigned long long comb(unsigned int n, unsigned int r);

static inline unsigned long long fact(unsigned int x) {
	return factorials[x];
}

static inline int sgni(int x) {
	return (x > 0) - (x < 0);
}

static inline int sgnl(long x) {
	return (x > 0L) - (x < 0L);
}

static inline int sgnll(long long x) {
	return (x > 0LL) - (x < 0LL);
}

static inline int sgnf(float x) {
	return (x > 0.0f) - (x < 0.0f);
}

static inline int sgnd(double x) {
	return (x > 0.0) - (x < 0.0);
}

static inline int sgnld(long double x) {
	return (x > 0.0L) - (x < 0.0L);
}

static inline float sigmf(float x) {
	return 1.0f / (1.0f + exp(-x));
}

static inline double sigmd(double x) {
	return 1.0 / (1.0 + exp(-x));
}

static inline long double sigmld(long double x) {
	return 1.0L / (1.0L + exp(-x));
}

#endif
