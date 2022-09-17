#ifndef __LIBRARY_DANTE_H__
#define __LIBRARY_DANTE_H__
#include <stdint.h>
typedef uint64_t fraction64;
typedef uint32_t fraction32;
typedef uint16_t fraction16;
typedef fraction32 fraction;

#define Fraction(a, b, s) (((s)a << (sizeof(s)*4)) + (s)b)

#define fint(x) _Generic((x), \
	fraction16: f16int(x),\
	fraction32: f32int(x),\
	fraction64: f64int(x)\
)
#define f16int(f) ((uint8_t)(f>>sizeof(fraction16)*4) / (uint8_t)f)
#define f32int(f) ((uint16_t)(f>>sizeof(fraction32)*4) / (uint16_t)f)
#define f64int(f) ((uint32_t)(f>>sizeof(fraction64)*4) / (uint32_t)f)

#define ffloat(x) _Generic((x), \
	fraction16: f16float(x),\
	fraction32: f32float(x),\
	fraction64: f64float(x)\
)
#define f16float(f) ((float)((uint8_t)(f>>sizeof(fraction16)*4)) / (float)((uint8_t)f))
#define f32float(f) ((double)((uint16_t)(f>>sizeof(fraction32)*4)) / (double)((uint16_t)f))
#define f64float(f) ((long double)((uint32_t)(f>>sizeof(fraction64)*4)) / (long double)((uint32_t)f))


#define fsimplify(x) _Generic((x), \
	fraction16: f16simplify(x),\
	fraction32: f32simplify(x),\
	fraction64: f64simplify(x)\
)
fraction16 f16simplify (fraction16);
fraction32 f32simplify (fraction32);
fraction64 f64simplify (fraction64);

#define fadd(x, y) _Generic((x), \
	fraction16: f16add(x, y),\
	fraction32: f32add(x, y),\
	fraction64: f64add(x, y)\
)
fraction16 f16add (fraction16, fraction16);
fraction32 f32add (fraction32, fraction32);
fraction64 f64add (fraction64, fraction64);

#define fsub(x, y) _Generic((x), \
	fraction16: f16sub(x, y),\
	fraction32: f32sub(x, y),\
	fraction64: f64sub(x, y)\
)
fraction16 f16sub (fraction16, fraction16);
fraction32 f32sub (fraction32, fraction32);
fraction64 f64sub (fraction64, fraction64);

#define fmul(x, y) _Generic((x), \
	fraction16: f16mul(x, y),\
	fraction32: f32mul(x, y),\
	fraction64: f64mul(x, y)\
)
fraction16 f16mul (fraction16, fraction16);
fraction32 f32mul (fraction32, fraction32);
fraction64 f64mul (fraction64, fraction64);

#define fdiv(x, y) _Generic((x), \
	fraction16: f16div(x, y),\
	fraction32: f32div(x, y),\
	fraction64: f64div(x, y)\
)
fraction16 f16div (fraction16, fraction16);
fraction32 f32div (fraction32, fraction32);
fraction64 f64div (fraction64, fraction64);
#endif
