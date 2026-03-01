int swap(int arr[], int i, int j){
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

void reversed(int arr[], int size){
    for (int i = 0; i < size / 2; i++) {
        // O par do índice i é sempre (tamanho - 1 - i)
        swap(arr, i, size - 1 - i);
    }
}

void main(){
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    reversed(arr, size);
    for (int i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }
}
