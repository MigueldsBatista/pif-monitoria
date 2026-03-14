#include <stdio.h>
#include <stdbool.h>

/**
 * Verifica se uma matriz é simétrica.
 *
 * Uma matriz é considerada simétrica se ela for idêntica à sua própria transposta.
 * Ou seja, para cada elemento, o valor em A[i][j] deve ser igual ao valor em A[j][i].
 *
 * Exemplo:
 * Se A[0][1] é 5, então A[1][0] também deve ser 5 para que haja simetria.
 */

// LEMBRANDO: indice_linear = *(p + (i x N + j))


int obter_indice(int i, int j, int N){
    return i * N + j;
}

bool eh_simetrica(int N, int *mat){
    int linear_i, linear_j = 0;

    for (int i = 0; i < N; i++){
        for (int j = i + 1; j < N; j++){
            linear_i = obter_indice(i, j, N);
            linear_j = obter_indice(j, i, N);

            int equal = *(mat + linear_i) == *(mat + linear_j);
            
            if(!equal)
                return false;
        }
    }

    return true;
}

int main() {
    int matriz1[9] = {
        1, 2, 3,
        2, 4, 5,
        3, 5, 6
    };

    int matriz2[9] = {
        1, 0, 3,
        2, 4, 5,
        3, 5, 6
    };
    
    printf("matriz1: esperado true, resultado: %s\n", eh_simetrica(3, matriz1) ? "true" : "false");
    printf("matriz2: esperado false, resultado: %s\n", eh_simetrica(3, matriz2) ? "true" : "false");

    return 0;
}