#include <stdio.h>

int sum(int a, int b){
    return a+b;
}

int mul(int a, int b){
    int aux = 0;
    for (int i=0; i < b; i++){
        aux = sum(aux,a);
    }
    return aux;
}

int main(){
    printf("A multiplicação do número %d X %d é : %d\n",3,3,mul(3,3));
    printf("A multiplicação do número %d X %d é : %d\n",7,7,mul(7,7));
    printf("A multiplicação do número %d X %d é : %d\n",2,3,mul(2,3));


    return 0;
}