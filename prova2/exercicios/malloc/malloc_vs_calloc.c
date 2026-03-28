#include <stdio.h>
#include <stdlib.h>




int main(){

    int tamanho;

    scanf("%d", &tamanho);

    int *vetor_calloc = (int*)calloc(tamanho, sizeof(int));

    for (int i = 0; i < tamanho; i++){
        printf("[%d]", vetor_calloc[i]);
    }

    
    
    int *vetor_malloc = (int*)malloc(tamanho * sizeof(int));

    for (int i = 0; i < tamanho; i++){
        printf("[%d]", vetor_malloc[i]);
    }
}