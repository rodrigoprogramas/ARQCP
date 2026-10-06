
#include "ascii_code.h"

int string_to_int(char str[]){
    char *str_copy = str;
    int result = 0;

    while(*str_copy != '\0'){
        int digit = get_ascii_code(*str_copy) - get_ascii_code('0');
        result = (result * 10) + digit;
        str_copy++;
    }

    return result;    
}