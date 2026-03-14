#include <stdio.h>
int vetor(int V[], int N, int R[])
{
    int cont = 0;
    if (N == 0)
    {
        return 0;
    }
    R[cont] = V[0];
    cont++;
    for (int i = 1; i < N; i++)
    {
        if (V[i] != V[i - 1])
        {
            R[cont] = V[i];
            cont++;
        }
    }
    return cont;
}

int main()
{
    int N;
    scanf("%d", &N);
    int V[N], R[N];

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &V[i]);
    }

    int cont = vetor(V, N, R);

    for (int i = 0; i < cont; i++)
    {
        printf("{%d}", R[i]);
    }

    printf("\n");
    printf("%d", cont);
    return 0;
}