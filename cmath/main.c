#include <stdio.h>

#include "cmath.h"


int main(){

    printf("Hello, World!\n");

    printf("%d\n", NUMARGS(int, 3, 4, 5, 6));

    return 0;
}