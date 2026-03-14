#include <stdio.h>

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


int main()
{
    int V1[2] = {1, 2};
    int V2[2] = {3, 4};

    int resultado = produto_escalar(V1, V2, 2); // esperado = 11
    printf("Resultado: %d", resultado);
    return 0;
}
