#include <stdio.h>
#include <stdlib.h>


int is_lower(char letter){
    return (letter >= 'a' && letter <= 'z');
}

char char_to_upper(char letter){
    if(is_lower(letter)){
        return letter - ('a' - 'A');
    }

    return letter;
}

void to_upper(char *phrase, int N){
    for (int i = 0; i < N; i++){
        phrase[i] = char_to_upper(phrase[i]);
    }
}


int main(){
    char phrase[] = "sUbi no onibus";
    
    to_upper(phrase, sizeof(phrase) - 1);

    printf("%s \n", phrase);

    return 0;
}