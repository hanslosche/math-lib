#include <stdio.h>

#include "cmath.h"
#include "vec.h"

int main(){

    printf("Hello, World!\n");
    
    vec v1 = vector(1.0f, 2.0f, -3.0f);
    print(v1);

    vec v2 = power(v1, 3.0f);
    print(v2);

    powerOf(&v1, 3.0f);
    print(v1);

    return 0;
}
