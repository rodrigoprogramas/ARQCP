#include "string_to_int.h"

int integer_part(char x[]){
    int i = 0;
    char aux;
    int num;
    while(x[i] != 0 && x[i] != '.'){
        i++;
    }
    aux = x[i];
    x[i] = '\0';
    num = string_to_int(x);
    x[i] = aux;
    
    return num;
}