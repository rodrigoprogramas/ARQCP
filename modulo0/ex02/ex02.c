#include <stdio.h>

int sum(int a, int b){
    return a+b;
}

int main(){
    printf("O resultado de %d + %d = %d\n", 2,2, sum(2,2));
    printf("O resultado de %d + %d = %d\n", 10,20, sum(2,2));
    printf("O resultado de %d + %d = %d\n", 500,100, sum(2,2));

    return 0;
}