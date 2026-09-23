#include <stdio.h>


int cmp(int a, int b){

    if (a < b) return -1;
    if (a == b) return 0;
    return 1;
    
}

int get_greater_digit(int n){

    if (n < 0){
        n = -n;
    }
    int greaterDigit = 0;
    if (n < 10){
        greaterDigit = n;
    }
    
    do {
        int currentDigit = n % 10;
        if (cmp(currentDigit,greaterDigit) == 1){
            greaterDigit = currentDigit;
        }
        if (greaterDigit == 9){
            return 9;
        }
        n = n/10;
    } while (n > 0);

    return greaterDigit;
    
}


int main(){
    printf("Inteiro:%d. Maior Digito: %d\n", 1,get_greater_digit(1));
    printf("Inteiro:%d. Maior Digito: %d\n", 12,get_greater_digit(12));
    printf("Inteiro:%d. Maior Digito: %d\n", 12345678,get_greater_digit(12345678));
    printf("Inteiro:%d. Maior Digito: %d\n", 12345689,get_greater_digit(12345689));
    printf("Inteiro:%d. Maior Digito: %d\n", 374384,get_greater_digit(374384));

}