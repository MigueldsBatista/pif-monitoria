#include <stdio.h>

/**
 * Transpor uma matriz, trocando suas linhas por colunas.
 *
 * O elemento que ocupa a posição (linha, coluna) na matriz original passará a ocupar a posição (coluna, linha) na matriz transposta.
 *
 * Por exemplo, se a primeira linha da matriz original é 1 2 3, ela se tornará a primeira coluna da matriz transposta.
 */

// LEMBRANDO: indice_linear = *(p + (i x N + j))


int obter_indice(int i, int j, int N){
    return i * N + j;
}

void transpor_matriz(int *mat, int N){
    int linear_i, linear_j = 0;

    for (int i = 0; i < N; i++){
        for (int j = i + 1; j < N; j++){
            linear_i = obter_indice(i, j, N);
            linear_j = obter_indice(j, i, N);

            int temp = *(mat + linear_i);
            *(mat + linear_i) = *(mat + linear_j);
            *(mat + linear_j) = temp;
            printf("SWAP: [%d] <=> [%d]\n", *(mat + linear_j),  *(mat + linear_i));
        }
    }
}

void main(){
    int N = 3;

    int mat[9] = {
        1, 2, 3,
        4, 5, 6,
        7, 8, 9
    };

    printf("Matriz original:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            int linear = obter_indice(i, j, N);
            printf("%d ", *(mat + linear));
        }
        printf("\n");
    }

    transpor_matriz(mat, N);

    printf("\nMatriz transposta:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            int linear = obter_indice(i, j, N);
            printf("%d ", *(mat + linear));
        }
        printf("\n");
    }
}
