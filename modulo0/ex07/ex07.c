#include <stdio.h>


int get_ascii_char(int c){
    return '0' + c;
}

int main(){
    printf("O código ASCII do número %d é %d\n",1,get_ascii_char(1));
    printf("O código ASCII do número %d é %d\n",23,get_ascii_char(23));
}