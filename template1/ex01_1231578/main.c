/*
    1231578: Rodrigo Marques Rodrigues: 2DF : version A
*/
#include <stdio.h>
#include "func2.h"
#define NCARS 5

int main(void){
    unsigned int cars[NCARS]={0xFFFFFFFF,0xFFFAFFFA,0x00000000,0xFCFDEFAB,0xFFFFFFFF};
    unsigned int *fill[NCARS];

    printf("Number of cars that need to be filled: %d\n", check_tires(cars, NCARS, fill));

    return 0; 
}