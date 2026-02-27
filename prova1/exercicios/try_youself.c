#include <stdio.h>

#define MAX_SIZE 100
//Crie um programa que faça a multiplicação de duas matrizes, recebendo a entrada do usuário

// https://excalidraw.com/?element=wdWl0xWhKO-anBHBfO3Qa#room=4c0bc517bb42ecbbdeaf,EkJVXZLP_sL3RyfqVskfMQ

void lerMatriz(int matriz[MAX_SIZE][MAX_SIZE], int linhas, int colunas);

void imprimirMatriz(int matriz[MAX_SIZE][MAX_SIZE], int linhas, int colunas);

void multiplicarMatrizes(int mat_a[MAX_SIZE][MAX_SIZE], int L1, int C1,
                         int mat_b[MAX_SIZE][MAX_SIZE], int L2, int C2,
                         int result_mat[MAX_SIZE][MAX_SIZE]);

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