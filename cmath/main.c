#include <stdio.h>

#include "cmath.h"
#include "vec.h"

int main(){

    printf("Hello, World!\n");
    
    vec v1 = constructDefaultVector(5, 6.9f);
    print(v1);

    vec v2 = constructDefaultVector(6, 6.9f);
    print(v2);

    printf("%d\n", equals(v1, v2));

    return 0;
}
