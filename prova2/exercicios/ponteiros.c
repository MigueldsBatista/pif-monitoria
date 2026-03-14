#include <stdio.h>

#define MAX 3

#include <stdio.h>

void read_mat(float mat[MAX][MAX]) {
    for (int i = 0; i < MAX; i++) {
        for (int j = 0; j < MAX; j++) {
            scanf("%f", &mat[i][j]); // f p/ float
        }
    }
}

void solve() {
    float mat[MAX][MAX];
    float resultado = 0;

    read_mat(mat);

    float (*p)[MAX] = mat;

    for (int i = 0; i < MAX; i++) {
        printf("Linha [%d] (Endereco: %p):\n", i, (void*)p);
        
        for (int j = 0; j < MAX; j++) {
            // Acessando o elemento na coluna j da linha apontada por p
            printf("  Valor [%d][%d]: %.1f\n", i, j, (*p)[j]);
        }
        
        p++; // Pula para a próxima linha
    }
    

    printf("%.1f\n", resultado);
}

int main() {
    solve();
    return 0;
}