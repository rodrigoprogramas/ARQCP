#include <stdio.h>


int get_ascii_code(char c){
    return (int) c;
}

int main(){

    printf("O código ASCII do char %d é %c\n",'a',get_ascii_code('a'));

}