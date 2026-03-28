#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

// funcao que recebe uma string e retorna a versão maiscula

// char[] toUpper(char *string, int N);

// Nivel 1, ver se é (Exemplo: "arara") // SEM ESPAÇO // SEM CHAR MAIUSCULO


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


int is_lower(char letter){
    return (letter >= 'a' && letter <= 'z');
}

char char_to_upper(char letter){
    if(is_lower(letter)){
        return letter - ('a' - 'A');
    }

    return letter;
}

bool is_palindromo(char *phrase, int N){
    for (int i = 0, j = N - 1; i < N && j > 0; i++, j--){
        
        while (phrase[i] == ' ') i++;
        while (phrase[j] == ' ') j--;
        
        if(phrase[i] != phrase[j]){
            return false;
        };
    }

    return true;
}


int main(){
    char phrase[] = "subi no onibus";
    
    int result = is_palindromo(phrase, sizeof(phrase) - 1);

    printf("%s \n", result ? "Palindromo" : "Não Palíndromo");

    return 0;
}