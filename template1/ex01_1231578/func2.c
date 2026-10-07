/*
    1231578: Rodrigo Marques Rodrigues: 2DF : version A
*/
#include "func1.h"

int check_tires(unsigned int *cars, int n, unsigned int **fill){
    int low_pressure_cars = 0;
    for(int i = 0; i < n ; i++){
      if(low_pressure(&cars[i])){
            fill[low_pressure_cars] = &cars[i];   
            low_pressure_cars++;
      }
    }
    return low_pressure_cars;
}