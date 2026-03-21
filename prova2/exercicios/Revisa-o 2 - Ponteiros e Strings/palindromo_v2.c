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






// int is_lower(char letter){
//     return (letter >= 'a' && letter <= 'z');
// }

// char char_to_upper(char letter){
//     if(is_lower(letter)){
//         return letter - ('a' - 'A');
//     }

//     return letter;
// }

int palindromo(char *phrase, int N){
    char *left = phrase;
    char *right = phrase + N - 1;

    while (left < right){
        if(*left != *right){
            return 0;
        }

        left++;
        right--;
    }
    
    return 1;
}


int main(){
    char phrase[] = "subinoonibus";
    
    int result = palindromo(phrase, sizeof(phrase) - 1);

    printf("%s \n", result ? "Palindromo" : "Não Palíndromo");

    return 0;
}