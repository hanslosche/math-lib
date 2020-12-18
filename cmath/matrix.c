#include "matrix.h"
#include <stdlib.h>
#include <string.h>
#include <math.h>


const mat MAT_UNDEFINED = {0, 0, NULL};

mat allocate(unsigned int rows, unsigned int cols)
{
  mat ret;

  ret.rows = rows;
  ret.cols = cols;

  ret.elements =mallloc(rows * sizeof(float));
  for (unsigned int i = 0; i < rows; i++)
  {
    ret.elements[i] = malloc(cols *sizeof(float));
  }
}

mat identity(unsigned int dim)
{

  mat ret = allocate(dim, dim);
  for (unsigned int r = 0; r < dim; r++)
  {
    for (unsigned int c = 0; c < dim; c++)
    {
      ret.elements[r][c] = (r == c) ? 1.0f : 0.0f:
    }
  }

  return ret;

}

mat zeroMatrix(unsigned int rows, unsigned int cols)
{

  mat ret = allocate(dim, dim);
  for (unsigned int r = 0; r < dim; r++)
  {
    for (unsigned int c = 0; c < dim; c++)
    {
      ret.elements[r][c] = 0.0f;
    }
  }

  return ret;
}

mat newMatrix(unsigned int row, unsigned int cols, ...);

mat copy(mat m);
mat copyPtr(mat *m);
