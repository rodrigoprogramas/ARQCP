#include <stdio.h>


int cmp(int a, int b){
    if (a < b){
        return -1;
    }

    if (a == b){
        return 0;
    }

    if (a > b ){
        return 1;
    }
}



int main(){
    printf("O valor a: %d. Valor b:%d. Output: %d\n", 1,2, cmp(1,2));
    printf("O valor a: %d. Valor b:%d. Output: %d\n", 2,2, cmp(2,2));
    printf("O valor a: %d. Valor b:%d. Output: %d\n", 3,2, cmp(3,2));
}