#include "integer_part.h"
#include "fractional_part.h"

#include <stdio.h>

int main(){
    char x[] = "123.456";
    int x_int = integer_part(x);
    int x_frac = fractional_part(x);

    printf("A parte inteira do valor x %s é %i \n", x, x_int);
    printf("O parte fracionaria do valor x %s é %i \n", x, x_frac);

}