// 3. O Minerador de Dados — Filtro Numérico


// Implemente extrai_digitos, que percorre *origem exclusivamente com aritmética de
// ponteiros  (o  operador  []  é  proibido)  e  copia  somente  os  caracteres  de  '0'  a  '9'  para

// *destino, corretamente terminado com '\0'. Retorne a quantidade de dígitos copiados.

// int extrai_digitos(char *origem, char *destino);

// Exemplo: extrai_digitos("T3mp:42C #7!", dest) → dest = "3427", retorno = 4.
#include <stdio.h>

#define END_OF_STRING '\0'

int extrai_digitos(char *origem, char* destino){
    int digitos = 0, i = 0;

    while (*(origem + i) != END_OF_STRING){

        if(*(origem + i) >= '0' && *(origem + i) <= '9'){
            *(destino + digitos) = *(origem + i);
            digitos+=1;
        }

        i+=1;
    }

    *(destino + digitos) = END_OF_STRING;

    return digitos;
}

int main(){
    char origem[] = "T3mp:42C #7!";
    char destino[13];

    int digitos = extrai_digitos(origem, destino);

    printf("String resultante: %s\n", destino);
    printf("Quantidade de digitos: %d\n", digitos);

    return 0;
}