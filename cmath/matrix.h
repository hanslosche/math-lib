#include <stdarg.h>
#include <stdio.h>

#include "cmath.h"

#ifndef MATRIX_H
#define MATRIX_H

typedef struct
{
  unsigned int rows;
  unsigned int cols;
  float **elements;
} mat;

extern const mat MAT_UNDEFEFINED;

mat allocateMat(unsigned int rows, unsigned int cols);
mat identity(unsigned int dim);
mat zeroMatrix(unsigned int rows, unsigned int cols);
mat newMatrix(unsigned int row, unsigned int cols, ...);

mat copy(mat m);
mat copyPtr(mat *m);

void printMat(mat m);

#endif
