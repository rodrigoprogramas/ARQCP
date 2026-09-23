#include <stdio.h>

char get_ascii_char(int c){
    return (char) c; 
}

int main(){
    
   printf("O código ASCII %d corresponde ao char %c\n", 97 , get_ascii_char(97));

}