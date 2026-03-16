#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

// Nivel 1, ver se é (Exemplo: "arara")
// Nivel 2 - Desconsiderar espaço (Exemplo: "ame o poema")
// Nivel 3 desconsiderar upper / lower case e espaço (Exemplo: "Socorram-me subi no ônibus em Marrocos")

/*
Exemplos de palíndromos:
- "arara"
- "subinoonibus"
- "radar"
- "Ame o poema"
- "Socorram-me subi no ônibus em Marrocos"

Exemplos que não são palíndromos:
- "banana"
- "computador"
- "palindromo"
*/


bool is_palindromo(char *phrase, int N){
    for (int i = 0, j = N - 1; i < N && j > 0; i++, j--){

        if(phrase[i] != phrase[j]){
            return false;
        };
    }

    return true;
}


int main(){
    char phrase[] = "subinoonibus";
    
    int result = is_palindromo(phrase, sizeof(phrase) - 1);

    printf("%s \n", result ? "Palindromo" : "Não Palíndromo");

    return 0;
}