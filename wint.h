#ifndef WINT_H
#define WINT_H

#include <stdint.h>
#include <stddef.h>

#define I8_MIN -128
#define I8_MAX 127
#define I16_MIN -32768
#define I16_MAX 32767
#define I32_MIN (-2147483647L - 1L)
#define I32_MAX 2147483647L
#define I64_MIN (-9223372036854775807LL - 1LL)
#define I64_MAX 9223372036854775807LL

#define U8_MIN 0
#define U8_MAX 255
#define U16_MIN 0
#define U16_MAX 65535
#define U32_MIN 0
#define U32_MAX 4294967295L
#define U64_MIN 0
#define U64_MAX 18446744073709551615LL

#define USIZE_MIN SIZE_MIN
#define USIZE_MAX SIZE_MAX

#define ISIZE_MIN PTRDIFF_MIN
#define ISIZE_MAX PTRDIFF_MAX

#define I8_WIDTH 8
#define I16_WIDTH 16
#define I32_WIDTH 32
#define I64_WIDTH 64

#define U8_WIDTH 8
#define U16_WIDTH 16
#define U32_WIDTH 32
#define U64_WIDTH 64

#if defined(__STDC_VERSION__) && __STDC_VERSION__ >= 202311L
	#define USIZE_WIDTH SIZE_WIDTH
	#define ISIZE_WIDTH PTRDIFF_WIDTH
#endif

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
