#include "matrix.h"
#include <stdlib.h>
#include <string.h>
#include <math.h>


const mat MAT_UNDEFINED = {0, 0, NULL};

mat allocateMat(unsigned int rows, unsigned int cols)
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

  mat ret = allocateMat(dim, dim);
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

  mat ret = allocateMat(dim, dim);
  for (unsigned int r = 0; r < dim; r++)
  {
    for (unsigned int c = 0; c < dim; c++)
    {
      ret.elements[r][c] = 0.0f;
    }
  }

  return ret;
}

mat newMatrix(unsigned int row, unsigned int cols, ...)
{
  mat ret = allocateMat(rows, cols);

  va_list;
  va_start(list, rows * cols);

  for (unsigned int r = 0; i < rows; r++)
  {
    for (unsigned int c = 0; c < cols; c++)
    {
      ret.elements[r][c] = va_arg(list, double);
    }
  }

  va_end(list);

  return ret;
}

mat copy(mat m);
mat copyPtr(mat *m);

void printMat(mat m )
{
  printf("\n");
  for (unsigned int r =0; r < m.rows; r ++)
  {
    printf("\n");

    printf("|");

    for (unsigned int c = 0; c < m.cols; c++)
    {
      printf("%f", m.elements[r][c]);
    }

    printf("|");
  }

  printf("\n");
}


