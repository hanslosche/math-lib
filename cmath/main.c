#include <stdio.h>

#include "cmath.h"
#include "vec.h"
#include "matrix.h"

int main(){

    printf("Hello, World!\n");
    
    vec v1 = vector(2.0f, -3.0f, 1.0f);
    printVec(v1);

    vec v2 = vector(-2.0f, 1.0f, 1.0f);
    printVec(v2);

    vec v3 = cross(v1, v2);
    printVec(v3);


    return 0;
}

