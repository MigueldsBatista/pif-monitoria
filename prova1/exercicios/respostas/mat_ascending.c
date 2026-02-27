#include <stdio.h>

// Enunciado sugerido: “Leia uma matriz quadrada de ordem N e imprima sua representação em ordem crescente
//Ex: Matriz 12x12 do 0 até 143 

int order;

int main(){
    printf("Digite o tamanho da matriz:");

    scanf("%d", &order);

    int mat[order][order];

    for (int i = 0; i < order; i++){
        printf("\n");

        for (int j = 0; j < order; j++){
            mat[i][j] = i * order + j;
            if(mat[i][j] > 9){
               printf("[%d]", mat[i][j]);
            } else{
               printf("[0%d]", mat[i][j]);
            }
        }
    }
}