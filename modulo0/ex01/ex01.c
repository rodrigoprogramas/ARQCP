#include <stdio.h>

int main(){
    char charBacano;
    int intBacano;
    unsigned int unIntBacano;
    long longBacano;
    short shortBacano;
    long long longLongBacano;
    float floatBacano;
    double doubleBacano;
    printf("O tamanho do char é: %lu\n", sizeof(charBacano));
    printf("O tamanho do int é: %lu\n", sizeof(intBacano));
    printf("O tamanho do unsigned int é: %lu\n", sizeof(unIntBacano));
    printf("O tamanho do long é: %lu\n", sizeof(shortBacano));
    printf("O tamanho do short é: %lu\n", sizeof(longLongBacano));
    printf("O tamanho do long long é: %lu\n", sizeof(floatBacano));
    printf("O tamanho do double é: %lu\n", sizeof(doubleBacano));
   
}