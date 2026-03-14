#include <stdio.h>

int soma_sem_ptr(int vetor[], int n){
    int resultado = 0;
    for (int i = 0; i < n; i++){
        int elemento = vetor[i]; // vetor[i]
        resultado += elemento;
    }

    return resultado;
}


int soma(int *vetor, int n){
    int resultado = 0;
    for (int i = 0; i < n; i++){

        int elemento = *(vetor + i); // vetor[i]

        resultado += elemento;
    }

    return resultado;
}


void main(){

    int V2[5] = {3, 4, 5, 6 , 7};

    int resultado = soma(V2, 5);
    
    printf("Resultado: %d", resultado);

}