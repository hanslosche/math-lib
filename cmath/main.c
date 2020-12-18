#include <stdio.h>

#include "cmath.h"
#include "vec.h"

int main(){

    printf("Hello, World!\n");
    
    vec v1 = vector(4.0f, 1.0f, 2.0f);
    print(v1);

    vec v2 = vector(1.0f, 0.0f, -2.0f);
    print(v2);

    float v3 = dot(v1, v2);
    printf("%f\n", v3);


    return 0;
}
