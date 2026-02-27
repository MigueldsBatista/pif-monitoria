#include <stdio.h>


int calculate_min(int arr[], int size){
    int min = arr[0]; // relevar verificações de array vazio e etc mas saber como faz
    int min_index = 0;
    for (int i = 0; i < size; i++){
        if(arr[i] < min){
            min = arr[i];
            min_index = i;
        }
    }
    printf("Menor valor: %d\n", min);
    printf("Posicao: %d\n", min_index);
    return min;
}

int main(){
    int tamanho;
    
    scanf("%d", &tamanho);
    int array[tamanho];
    for (int i = 0; i < tamanho; i++){
        scanf("%d", &array[i]);
    }
    
    calculate_min(array, tamanho);

    return 0;
}