#include <stdio.h>
#include <malloc.h>



void display(int *arr, int n){
    for (int i = 0; i < n; i++){
        printf("[%d]->", *(arr++));
    }
}

int main()
{   
    int n;
    int i = 0;
    int *v1;

    while (1)
    {

        printf("Digite um valor para entrar no vetor: ");
        scanf("%d", &n);
    
        printf("\n");
    
        *(v1 + i) = malloc(sizeof(int));
        *(v1 + i) = n;
        i++;
        
        printf("Vetor 1: \n");
        display(v1, n);
        printf("\n");
    
    }
    

    return 0;
}
