#include <stdio.h>


int sum(int a, int b){
    return a+b;
}

int sum_digits(int n){
    int sumDigits = 0;

    if (n < 0){
        return 0;
    }

    while(n > 0){
        int last_digit = n % 10;
        sumDigits = sum(sumDigits,last_digit);
        n = n/10;
    }
    return sumDigits;
}

int main(){
    printf("A soma do número inteiro %d é : %d\n",134,sum_digits(134));
    printf("A soma do número inteiro %d é : %d\n",111,sum_digits(111));
    printf("A soma do número inteiro %d é : %d\n",66,sum_digits(66));


}