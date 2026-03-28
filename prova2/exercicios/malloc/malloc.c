#include <stdio.h>
#include <malloc.h>

int main() {
    int *p = (int *)malloc(sizeof(int));

    // Você informa quantos bytes deseja.

    // O sistema procura um espaço livre desse tamanho.

    // Ela retorna um ponteiro para o início desse espaço.

    // malloc retorna um ponteiro "genérico" (void *), é uma boa prática (e às vezes necessário) dizer ao compilador para qual tipo de dado aquele endereço aponta, usando algo chamado cast. Por exemplo:


    if (p == NULL) {
        printf("Erro ao alocar memória\n");
        return 1;
    }

    *p = 42;

    printf("Valor: %d\n", *p);

    free(p);
    return 0;
}