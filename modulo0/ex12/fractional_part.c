#include "string_to_int.h"

int fractional_part(char x[]){
    char *x_copy = x;
    
    while(*x_copy != '.' && *x_copy != '\0'){
        x_copy++;
    }
    x_copy++;

    return string_to_int(x_copy);

}