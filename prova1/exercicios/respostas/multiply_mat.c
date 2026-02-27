#include <stdio.h>

#define MAX_SIZE 100

// https://excalidraw.com/?element=wdWl0xWhKO-anBHBfO3Qa#room=4c0bc517bb42ecbbdeaf,EkJVXZLP_sL3RyfqVskfMQ

void lerMatriz(int matriz[MAX_SIZE][MAX_SIZE], int linhas, int colunas){
    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            scanf("%d", &matriz[i][j]);
        }
    }
}

void imprimirMatriz(int matriz[MAX_SIZE][MAX_SIZE], int linhas, int colunas)
{
    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

void multiplicarMatrizes(int mat_a[MAX_SIZE][MAX_SIZE], int L1, int C1,
                         int mat_b[MAX_SIZE][MAX_SIZE], int L2, int C2,
                         int result_mat[MAX_SIZE][MAX_SIZE])
{

    for (int i = 0; i < L1; i++)
    {
        for (int j = 0; j < C2; j++)
        {
            result_mat[i][j] = 0;// Precisamos inicializar

            for (int k = 0; k < C1; k++)//Poderia ser L2?
            {
                result_mat[i][j] += mat_a[i][k] * mat_b[k][j];
            }
        }
    }
}

int main()
{
    int L1, C1, L2, C2;
    int A[MAX_SIZE][MAX_SIZE], B[MAX_SIZE][MAX_SIZE], C[MAX_SIZE][MAX_SIZE];

    printf("Dimensoes da matriz A (linhas colunas): ");
    scanf("%d %d", &L1, &C1);
    printf("Digite os elementos da matriz A:\n");
    lerMatriz(A, L1, C1);

    printf("Dimensoes da matriz B (linhas colunas): ");
    scanf("%d %d", &L2, &C2);
    printf("Digite os elementos da matriz B:\n");
    lerMatriz(B, L2, C2);

    if (C1 != L2)
    {
        printf("Erro: Matrizes incompativeis para multiplicacao\n");
        return 0;
    }

    multiplicarMatrizes(A, L1, C1, B, L2, C2, C);

    printf("\nMatriz Resultante (A * B):\n");
    imprimirMatriz(C, L1, C2);

    return 0;
}