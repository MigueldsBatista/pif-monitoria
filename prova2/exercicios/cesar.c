#include <stdio.h>
#include <string.h>

char* cifra_cesar(char *text, int N, int deslocamento){
    for (int i = 0; i < N; i++){
        
        if (*(text + i) == ' '){
            continue;
        }
        int ascii_val = (int)*(text + i);
        int posicao_alfabeto = ascii_val - (int)'a'; // Ex: b - a = 1 -> (indice 1 do alfabeto)

        int new_index = posicao_alfabeto - deslocamento;

        int normalized = new_index % 26;
        if(normalized < 0) normalized += 26; // Em python não precisa dessa operação

        *(text + i) = (char)normalized + (int)'a';
    }

    return text;
}
    

void main(){
    char text[] = "hzn oerir erivfnb fboer pevcgbtensvn";

    printf("%s", cifra_cesar(text, strlen(text), 13));

}