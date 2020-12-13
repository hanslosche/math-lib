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


/**
 * 
 * 
 */

bool equals(vec v1, vec v2)
{
  if (v1.dim == v2.dim)
  {
    for(unsigned int i=0; i < v1.dim; i++)
    {
      if (v1.elements[i] != v2.elements[i])
      {
        return false;
      }
    }

    return true;
  }
  return false;
}

/**
 * 
 * 
 */

vec scalarMultiplication(vec v, float k)
{
  vec ret = allocate(v.dim);

  for(unsigned int i=0; i < ret.dim; i++)
  {
    ret.elements[i] = v.elements[i] * k;

  }
  return ret;
}

/**
 * 
 * 
 */

void scalarMultiplicationBy(vec *v, float k)
{
  for(unsigned int i=0; i < v->dim; i++)
  {
    v=>elements[i] *= k;
  }
}

/**
 * 
 * 
 */

vec scalarDivision(vec v, float k)
{
  vec ret = allocate(v.dim);

  for(unsigned int i=0; i < ret.dim; i++)
  {
    ret.elements[i] = v.elements[i] * k;

  }
  return ret;
}

/**
 * 
 * 
 */

void scalarDivisionBy(vec *v, float k)
{
  for(unsigned int i=0; i < v->dim; i++)
  {
    v=>elements[i] *= k;
  }
}

/**
 * 
 * 
 */

vec add(vec v1, vec v2)
{
  if (v1.dim != v2.dim)
  {
    return VEC_UNDEFINED;
  }
  vec ret = allocate(v1.dim);
  
  for(unsigned int i = 0; i < ret.dim; i++){
    ret.elements[i] = v1.elements[i] + v2.elements[i];
  }
  return ret;
}

/**
 * 
 * 
 */

bool addTo(vec *v1, vec v2)
{
  if (v1->dim != v2.dim)
  {
    return false;
  }

  for (unsigned int = 0; i < v1->dim; i++)
  {
    v1->elements[i] += v2.elements[i];
  }

  return true;
}

/**
 * 
 * 
 */

vec subtract(vec v1, vec v2)
{
  if (v1.dim != v2.dim)
  {
    return VEC_UNDEFINED;
  }
  vec ret = allocate(v1.dim);
  
  for(unsigned int i = 0; i < ret.dim; i++){
    ret.elements[i] = v1.elements[i] - v2.elements[i];
  }
  return ret;
}
  
/**
 * 
 * 
 */

bool SubtractFrom(vec *v1, vec v2)
{
  if (v1->dim != v2.dim)
  {
    return false;
  }

  for (unsigned int = 0; i < v1->dim; i++)
  {
    v1->elements[i] -= v2.elements[i];
  }

  return true;
}

/**
 * 
 * 
 */
 
vec multiply(vec v1, vec v2)
{
  if (v1.dim != v2.dim)
  {
    return VEC_UNDEFINED;
  }

  vec ret = allocate(v1.dim);

  for (unsigned int i = 0; i < ret.dim; i++)
  {
    ret.elements[i] = v1.elements[i] * v2.elements[i];
  }

  return ret;
}

/**
 * 
 * 
 */

bool multiplyBy(vec *v1, vec v2)
{
  if (v1->dim != v2.dim)
  {
    for (unsigned int i = 0; i < v1->dim; i++)
    {
      v1->elements[i] *= v2.elements[i];
    }
    return true;
  }
}

/**
 * 
 * 
 */

vec divide(vec v1, vec v2)
{
  if (v1.dim != v2.dim)
  {
    return VEC_UNDEFINED;
  }
  vec ret = allocate(v1.dim);
  
  for(unsigned int i = 0; i < ret.dim; i++){
    ret.elements[i] = v1.elements[i] / v2.elements[i];
  }
  return ret;
}

/**
 * 
 * 
 */

vec divideBy(vec *v1, vec v2)
{
  if (v1->dim != v2.dim)
  {
    for (unsigned int i = 0; i < v1->dim; i++)
    {
      v1->elements[i] /= v2.elements[i];
    }
    return true;
  }
}
