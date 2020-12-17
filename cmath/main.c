#include <stdio.h>

#include "cmath.h"
#include "vec.h"

int main(){

    printf("Hello, World!\n");
    
    vec v1 = vector(1.0f, 2.0f, -3.0f);
    print(v1);

    vec v2 = vector(2.0f, 3.0f, -4.0f);
    print(v2);

    vec v3 = divide(v1, v2);
    print(v3);

    divideBy(&v1, v2);
    print(v1);

    return 0;
}
