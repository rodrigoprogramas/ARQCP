#include <stdio.h>
#include "string_to_int.h"

int main(){
    char s[] = "1234";
    int integers = string_to_int(s);
    printf("The int value of %s is %i\n", s, integers);

}