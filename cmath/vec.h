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

vec newVector(unsigned int numArgs, ...);

/**
 * 
 * 
 */

#define NUMARGS(...)(sizeof((float[]){0, ##_VA_ARGS__ /sizeof(float -1));
#endif