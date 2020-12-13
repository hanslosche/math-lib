#include <stdarg.h>
#include <stdio.h>

#include "cmath.h"

#ifndef VEC_H
#define VEC_H

typedef struct 
{
    unsigned int dim;
    float *elements;
} vec;

extern const vec VEC_UNDEFINED;

/**
 * 
 * 
 */

vec allocate(unsigned int dim);

/**
 * 
 * 
 */

vec constructDefaultVector(unsigned int dim, float val);

/**
 * 
 * 
 */

vec constructEmptyVector(unsigned int dim);

/**
 * 
 * 
 */

vec newVector(unsigned int dim, ...);

/**
 * 
 * 
 */

#define vector(...) newVector(NUMARGS(float, __VA_ARGS__), ##__VA_ARGS__)

/**
 * 
 * 
 */

vec copy(vec v);

/**
 * 
 * 
 */

vec copyPtr(vec *v);

/**
 * 
 * 
 */

void print(vec v);

/**
 * 
 * 
 */

bool equals(vec v1, vec v2);

/**
 * 
 * 
 */

vec scalerMultiplication(vec v, float k);

/**
 * 
 * 
 */

void scalerMultiplicationBy(vec *v, float k);

/**
 * 
 * 
 */

vec scalerDivision(vec v, float k);

/**
 * 
 * 
 */

void scalerDivisionBy(vec *v, float k);

/**
 * 
 * 
 */

vec add(vec v1, vec2);

/**
 * 
 * 
 */

bool addTo(vec *v1, vec vec2);

/**
 * 
 * 
 */

vec subtract(vec v1, vec v2);

/**
 * 
 * 
 */

bool subtractFrom(vec *v1, vec v2);

/**
 * 
 * 
 */

vec multiply(vec v1, vec v2);

/**
 * 
 * 
 */

vec multiplyBy(vec *v1, vec v2);

/**
 * 
 * 
 */

vec divide(vec v1, vec v2);

/**
 * 
 * 
 */

vec divideBy(vec *v1, vec v2);

/**
 * 
 * 
 */

float dot(vec v1, vec v2);

#endif
