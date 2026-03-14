int soma_acima_diagonal(int N, int M[N][N]){
    int soma = 0;
    
    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
            if(j > i){
                soma+=M[i][j];
            }
        }
    }
    
    return soma;
}