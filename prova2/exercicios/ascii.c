#include <stdio.h>


int main(){
    char n = '1';

    printf("%d", n);

    if(n >= '0' && n <= '9'){
        printf("Numero");
    }
    else if((n >= 'a' && n <= 'z') || (n <= 'A' && n <= 'Z')){
        printf("Alfabeto");
    } else {
        printf("Especial");
    }
}