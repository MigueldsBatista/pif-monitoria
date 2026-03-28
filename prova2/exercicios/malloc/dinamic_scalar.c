#include <stdio.h>
#include <malloc.h>

/*
 * 1. Produto Escalar (Vetores)
 *
 * O produto escalar transforma dois vetores em um único número (escalar).
 * O que é: É a soma dos produtos dos elementos que estão na mesma posição.
 * Cálculo: Se temos V1 = {1, 2} e V2 = {3, 4}, o produto escalar é:
 * (1 * 3) + (2 * 4) = 3 + 8 = 11.
 */

int produto_escalar(int *v1, int *v2, int N)
{
    int result = 0;
    
    for (int i = 0; i < N; i++){
        result += (*v1++) * (*v2++);
        // result += *(v1 + i) * *(v2 + i) // Forma alternativa de resolver
    }

    return result;
}

void display(int *arr, int n){
    for (int i = 0; i < n; i++){
        printf("[%d]->", *(arr++));
    }
}

int main()
{   
    int n;
    printf("Digite o tamanho dos vetores: ");
    scanf("%d", &n);

    printf("\n");

    int *v1 = (int*)malloc(sizeof(int) * n);
    int *v2 = (int*)malloc(sizeof(int) * n);

    for (int i = 0, j = n; i < n && j > 0; i++, j--){
        *(v1 + i) = i + 1;
        *(v2 + i) = j;
    }
    
    printf("Vetor 1: \n");
    display(v1, n);
    printf("\n");
    printf("Vetor 2: \n");
    display(v2, n);
    printf("\n");

    int resultado = produto_escalar(v1, v2, 2); // esperado = 11
    printf("Resultado: %d", resultado);
    printf("\n");

    return 0;
}
