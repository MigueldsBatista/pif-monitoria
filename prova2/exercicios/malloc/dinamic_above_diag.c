#include <stdio.h>
#include <stdlib.h> // Use stdlib.h para malloc

void solve() {
    char op;
    int **mat;
    float resultado = 0; // Alterado para float
    int contagem = 0;
    int n;

    if (scanf("%d", &n) != 1) return;

    // Alocação o ponteiro pra matriz
    
    // Cast
    // Tamanho

    mat = (int**)malloc(sizeof(int*) * n);

    // Alocar cada linha (vetor)
    for (int i = 0; i < n; i++) {
        mat[i] = (int*)malloc(sizeof(int) * n);
    }

    scanf(" %c", &op);

    // Preenchimento e Exibição
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            mat[i][j] = i * n + j;
            printf("[%02d]", mat[i][j]); // %02d formata com zero à esquerda
        }
        printf("\n");
    }

    // Lógica da Triangular Superior
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (j > i) {
                resultado += mat[i][j];
                contagem++;
            }
        }
    }

    if (op == 'M' && contagem > 0) {
        resultado /= contagem;
    }

    printf("%.1f\n", resultado);

    // Liberação de Memória
    for (int i = 0; i < n; i++) free(mat[i]);
    free(mat);
}

int main() {
    solve();
    return 0;
}