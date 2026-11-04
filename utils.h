#ifndef UTILS_H
#define UTILS_H

#define UTILS_INT 1
#define UTILS_MATH 1

#if UTILS_INT

#include <stdint.h>
#include <stddef.h>

typedef int8_t i8;
typedef int16_t i16;
typedef int32_t i32;
typedef int64_t i64;
typedef uint8_t u8;
typedef uint8_t u16;
typedef uint8_t u32;
typedef uint8_t u64;

typedef size_t usize;
typedef ptrdiff_t isize;

#endif

#if UTILS_MATH

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
#define SQRT_2 1.41421356237309504880168872420969808
#define TAU 6.28318530717958647692528676655900577
#define FRAC_1_SQRT_3 0.577350269189625764509148780501957456
#define FRAC_1_SQRT_5 0.44721359549995793928183473374625524
#define FRAC_1_SQRT_2PI 0.398942280401432677939946059934381868
#define FRAC_1_SQRT_PI 0.564189583547756286948079451560772586
#define SQRT_3 1.732050807568877293527446341505872367
#define SQRT_5 2.23606797749978969640917366873127623

extern const unsigned int factorials[];

static inline int sgn(int val) {
    return (val > 0) - (val < 0);
}

static inline double fsgn(double val) {
    return (val > 0) - (val < 0);
}

static inline unsigned int factorial(unsigned int val) {
	return factorials[val];
}

#endif

#endif
