#include <stdio.h>

int is_ascending(int N, int mat[N][N]) {
    for (int i = 0; i < N; i++){
        for (int j = 0; j < N - 1; j++)        {
            if(mat[i][j] > mat[i][j+1]){
                return 0;
            }
        }
    }
    return 1;
}

int main(){
    int N;
    
    scanf("%d", &N);
    int mat[N][N];
    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
            scanf("%d", &mat[i][j]);
        }
    }

    int result = is_ascending(N, mat);
    printf("Result: %d", result);
}