
#include <stdio.h>

int main(){
    int x = 5;
    int *ptr_x = &x;
    float y = *ptr_x + 3;
    float *ptr_y = &y;
    int **aux = &ptr_x;

    printf("The value of x is %i \n",x );
    printf("The value of y is %f \n", y);
    printf("The address value of x is %X \n", ptr_x);
    printf("The address value of y is %X \n ", ptr_y);
    printf("The adress value of prt_x is %X \n", aux);
    printf("The value pointed by prt_x is %i \n", *ptr_x);

    int vec[] = {10, 20, 30, 40};
    int *ptr_vec = vec;
    int z = *ptr_vec;
    int h = *(ptr_vec + 3);
    int **ptr_ptr_vec = &ptr_vec;

    int i;
    for (i = 0; i < 4; i++){
        printf("1: %p,%d\t", &vec[i], vec[i]);
    }
    printf("\n");
    for (ptr_vec = vec; ptr_vec < vec + 4; ptr_vec++){
        printf("2: %p,%d\t", ptr_vec, *ptr_vec);
    }
    printf("\n");
    for (ptr_vec = vec + 3; ptr_vec >= vec; ptr_vec--){
        printf("3: %p,%d\t", ptr_vec, *ptr_vec);
    }

    printf("The value of z is %i:\n",z);
    printf("The value of h is %i:\n",h);
    printf("The adress of vec is %X:\n", ptr_vec);
    printf("The adress of ptr_vec is %X:\n", ptr_ptr_vec);
    printf("The value of ptr_vec is %i and the value of vec is %i\n",*ptr_vec, *vec);
    //Q :Explain the relationship between the address of vec and the value of ptr_vec.
    //A: the pointer value is equal to the adress of the first element of the array
    
    
}