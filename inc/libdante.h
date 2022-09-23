#ifndef __LIBRARY_DANTE_H__
#define __LIBRARY_DANTE_H__
#include <stdint.h>
typedef uint64_t fraction64;
typedef uint32_t fraction32;
typedef uint16_t fraction16;
typedef fraction32 fraction;

#define Fraction(a, b, s) (((s)(a) << (sizeof(s)*4)) + (s)(b))

#define fnum(x) _Generic((x), \
	fraction16: f16num(x),\
	fraction32: f32num(x),\
	fraction64: f64num(x)\
)
#define f16num(x) (uint8_t)((x) >> (sizeof(fraction16)*4))
#define f32num(x) (uint16_t)((x) >> (sizeof(fraction32)*4))
#define f64num(x) (uint32_t)((x) >> (sizeof(fraction64)*4))

#define fden(x) _Generic((x), \
	fraction16: f16den(x),\
	fraction32: f32den(x),\
	fraction64: f64den(x)\
)
#define f16den(x) ((uint8_t)(x))
#define f32den(x) ((uint16_t)(x))
#define f64den(x) ((uint32_t)(x))

#define fnorm(a, b) _Generic((a), \
	fraction16: f16norm(a, b),\
	fraction32: f32norm(a, b),\
	fraction64: f64norm(a, b)\
)
#define f16norm(a, b) ((uint8_t)((a) >> (sizeof(fraction16)*4)) * (uint8_t)(b))
#define f32norm(a, b) ((uint16_t)((a) >> (sizeof(fraction32)*4)) * (uint16_t)(b))
#define f64norm(a, b) ((uint32_t)((a) >> (sizeof(fraction64)*4)) * (uint32_t)(b))

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
#define f32float(f) ((float)((uint16_t)(f>>sizeof(fraction32)*4)) / (float)((uint16_t)f))
#define f64float(f) ((double)((uint32_t)(f>>sizeof(fraction64)*4)) / (double)((uint32_t)f))


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

#define fmod(x, y) _Generic((x), \
	fraction16: f16mod(x, y),\
	fraction32: f32mod(x, y),\
	fraction64: f64mod(x, y)\
)
fraction16 f16mod (fraction16, fraction16);
fraction32 f32mod (fraction32, fraction32);
fraction64 f64mod (fraction64, fraction64);

fraction16 f16apr (float, unsigned int);
fraction32 f32apr (float, unsigned int);
fraction64 f64apr (double, unsigned int);
#endif
