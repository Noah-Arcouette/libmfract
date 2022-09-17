#ifndef __LIBRARY_DANTE_H__
#define __LIBRARY_DANTE_H__
#include <stdint.h>
typedef uint64_t fraction64;
typedef uint32_t fraction32;
typedef uint16_t fraction16;
typedef fraction32 fraction;

#define Fraction(a, b, s) (((s)a << (sizeof(s)*4)) + (s)b)

#define FInt(x)   (FInt32(x))
#define F16Int(x) (uint8_t)(f>>sizeof(fraction16)*4) / (uint8_t)f
#define F32Int(x) (uint16_t)(f>>sizeof(fraction32)*4) / (uint16_t)f
#define F64Int(x) (uint32_t)(f>>sizeof(fraction64)*4) / (uint32_t)f

#define fsimplify(x) (f32simplify(x))
fraction16 f16simplify (fraction16);
fraction32 f32simplify (fraction32);
fraction64 f64simplify (fraction64);

#define fadd(x, y) (f32add(x, y))
fraction16 f16add (fraction16, fraction16);
fraction32 f32add (fraction32, fraction32);
fraction64 f64add (fraction64, fraction64);

#define fsub(x, y) (f32sub(x, y))
fraction16 f16sub (fraction16, fraction16);
fraction32 f32sub (fraction32, fraction32);
fraction64 f64sub (fraction64, fraction64);
#endif
