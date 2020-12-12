#include "vec.h"
#include <stdlib.h>
#include <string.h>

const vec VEC_UNDEFINED = {0, NULL};



/**
 * 
 * 
 */

vec allocate(unsigned int dim)
{
    vec ret;

    ret.dim = dim;
    ret.elements = malloc(dim * sizeof(float));

    return ret;
}

/**
 * 
 * 
 */

vec constructDefaultVector(unsigned int dim, float val)
{
    vec ret = allocate(dim);

    for(unsigned int i=0; i< dim; i++){
        ret.elements[i] = val;
    }

    return ret;
}


/**
 * 
 * 
 */

vec constructEmptyVector(unsigned int dim)
{
    return constructDefaultVector(dim, 0.0f);
}

/**
 * 
 * 
 */

vec newVector(unsigned int dim, ...)
{
    vec ret = allocate(dim);

    va_list list;
    va_start(list, dim);

    for(int i=0; i< dim; i++){
        ret.elements[i] = va_arg(list, double);
    }

    va_end(list);

    return ret;
}

/**
 * 
 * 
 */

vec copy(vec v)
{
  return v;
}

/**
 * 
 * 
 */

vec copyPtr(vec *v)
{

    vec ret;
    memcpy(&ret, v, sizeof(vec));
    return ret;
}

/**
 * 
 * 
 */

void print(vec v){
    printf("[");

    for(unsigned int i=0; i< v.dim; i++){
        printf("%f", v.elements[i]);

        if ( i < v.dim -1){
            printf(", ");
        } else {
            printf(" ");
        }
    }

    printf("]\n");
}
