#include <stdio.h>
#include "average.h"

int main(){
    int v[] = {1, 2};
    int r = 0;
    int *a = v;
    r = average(v[0], v[1]);
    printf("average =%d\n",r);
    
    r = average(*a,2);
    printf("average array =%d\n",r);
    
    return 0;
}