/**
 * Classifica os elementos de um vetor de inteiros em positivos, negativos e zeros.
 *
 * Esta função percorre um vetor de inteiros e conta quantos elementos são positivos,
 * quantos são negativos e quantos são iguais a zero. Os resultados são retornados
 * por referência através de ponteiros fornecidos como argumentos.
 *
 * Parâmetros:
 *   - vetor: ponteiro para o vetor de inteiros a ser classificado.
 *   - tamanho: número de elementos no vetor.
 *   - positivos: ponteiro para um inteiro onde será armazenada a quantidade de elementos positivos.
 *   - negativos: ponteiro para um inteiro onde será armazenada a quantidade de elementos negativos.
 *   - zeros: ponteiro para um inteiro onde será armazenada a quantidade de elementos iguais a zero.
 *
 * Retorno:
 *   - Não retorna valor diretamente. Os resultados são fornecidos via ponteiros.
 */


 void calcular_metricas(
    int *vetor,
    int tamanho,
    int *positivos,
    int *negativos,
    int *zeros
 ){
    for (int i = 0; i < tamanho; i++){
        int elemento = (*vetor);

        if (elemento > 0){
            (*positivos)++;
        } else if (elemento < 0){
            (*negativos)++;
        } else if (elemento == 0){
            (*zeros)++;
        }
        vetor++;
    }
 }

 void main(){
    int *positivos = 0;
    int *negativos = 0;
    int *zeros = 0;

    int vetor[5] = {0, 0, -1, -2, 3};

    calcular_metricas(vetor, 5, &positivos, &negativos, &zeros);

    printf("Positivos: %d\n", positivos);
    printf("Negativos: %d\n", negativos);
    printf("Zeros: %d\n", zeros);
 }