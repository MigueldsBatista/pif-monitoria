#include <stdio.h>

int semRepetidos(int V[], int R[], int N){
    if(N == 0) return 0;
    
    int cont = 0;
    R[cont++] = V[0];

    for (int i = 1; i < N; i++){
        if(V[i] != V[i - 1]){
            R[cont] = V[i];
            cont++;
        }
    }
    return cont;
}

int main(){
    int V[] =  {5, 5, 5, 2, 2, 7, 3, 3, 1};
    int N = sizeof(V) / sizeof(V[0]);
    int R[N];

    int count = semRepetidos(V, R, N);

    printf("Novo tamanho: %d\n", count);
    printf("R: ");
    for (int i = 0; i < count; i++){
        printf("%d ", R[i]);
    }
}