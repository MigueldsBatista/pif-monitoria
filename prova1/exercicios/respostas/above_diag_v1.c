#include <stdio.h>

#define MAX 12

void read_mat(float mat[MAX][MAX]) {
    for (int i = 0; i < MAX; i++) {
        for (int j = 0; j < MAX; j++) {
            scanf("%f", &mat[i][j]); // f p/ float
        }
    }
}

void solve() {
    char op;
    float mat[MAX][MAX];
    float resultado = 0;
    int contagem = 0;

    scanf(" %c", &op); // O espaço antes de %c ignora quebras de linha anteriores

    read_mat(mat);

    for (int i = 0; i < MAX; i++) {
        for (int j = 0; j < MAX; j++) {
            if(j > i){
                resultado = resultado + mat[i][j];
                contagem++;
            }
        }
    }

    if (op == 'M') {
        resultado = resultado / contagem;
    }

    printf("%.1f\n", resultado);
}

int main() {
    solve();
    return 0;
}