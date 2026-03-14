#include <stdio.h>

/*
====================================================
CONCEITOS IMPORTANTES
====================================================

&  → operador "endereço de memória"
     Ex: &x  → retorna o endereço onde x está armazenado

*  → tem dois significados:

1) Na declaração:
     int *p;
   Significa: p é um ponteiro para int (aponta para um inteiro)

2) Na expressão (dereferência):
     *p
   Significa: vá até o endereço guardado em p
              e acesse o valor armazenado lá

====================================================
COMO IMPRIMIR
====================================================

%d  → imprime int
%p  → imprime endereço (precisa cast para void*)

Exemplo:
printf("%p\n", (void*)&x);

====================================================
*/

void altera_v1(int x) {
    x = 999;
}

void altera_v2(int *x) {
    *x = 888;
}

void altera_ponteiro_v1(int *x) {
    x = NULL;
}

void altera_ponteiro_v2(int **x) {
    *x = NULL;
}

int main() {

    printf("=========== TESTE 1 ===========\n");
    int a = 10;

    printf("Valor de a: %d\n", a);
    printf("Endereco de a: %p\n", (void*)&a);

    altera_v1(a);

    printf("Depois da funcao, a = %d\n", a);
    printf("Pergunta: por que 'a' mudou/nao mudou?\n\n");


    printf("=========== TESTE 2 ===========\n");
    int b = 20;

    printf("Valor de b: %d\n", b);
    printf("Endereco de b: %p\n", (void*)&b);

    altera_v2(&b);

    printf("Depois da funcao, b = %d\n", b);
    printf("Pergunta: por que mudou/nao mudou?\n\n");


    printf("=========== TESTE 3 ===========\n");
    int c = 30;
    int *p = &c;



    printf("Valor de c: %d\n", c);
    printf("Endereco de c: %p\n", (void*)&c);
    
    printf("Endereço igual? %s\n", p == &c ? "SIM": "NÃO");

    printf("Valor guardado em p (endereco): %p\n", (void*)p);

    altera_ponteiro_v1(p);

    printf("Depois da funcao, p eh NULL? %s\n",
           p == NULL ? "SIM" : "NAO");

    printf("Pergunta: por que p nao virou NULL?\n\n");


    printf("=========== TESTE 4 ===========\n");
    int d = 40;
    int *q = &d;

    printf("Endereco de d: %p\n", (void*)&d);
    printf("Endereco guardado em q: %p\n", (void*)q);

    altera_ponteiro_v2(&q);

    printf("Depois da funcao, q eh NULL? %s\n",
           q == NULL ? "SIM" : "NAO");

    printf("Pergunta: por que agora virou NULL?\n\n");


    printf("=========== TESTE 5 ===========\n");
    int e = 50;
    int *r = &e;
    int *s = r;

    printf("Endereco de e: %p\n", (void*)&e);
    printf("r aponta para: %p\n", (void*)r);
    printf("s aponta para: %p\n", (void*)s);

    *r = 1234;

    printf("Valor de e: %d\n", e);
    printf("Valor acessado por s: %d\n", *s);

    printf("Pergunta: por que ambos veem o mesmo valor?\n\n");


    printf("=========== TESTE 6 ===========\n");
    int f = 60;
    int *t = &f;

    printf("Antes: f = %d\n", f);
    printf("Endereco de f: %p\n", (void*)&f);
    printf("t aponta para: %p\n", (void*)t);

    t = NULL;

    printf("Depois: f = %d\n", f);
    printf("Pergunta: por que f nao mudou?\n\n");


    return 0;
}

// Em cada teste você precisa responder mentalmente:

// Estou passando o valor ou o endereço?

// Estou modificando uma cópia?

// Estou modificando o conteúdo do endereço?

// Estou modificando o ponteiro original ou só uma cópia dele?

// Quais endereços são iguais?

// O que está na stack e o que está sendo referenciado?

// Regra estrutural que precisa ficar clara

// Se você altera:

// x → altera variável local

// *x → altera conteúdo apontado

// x = NULL → altera só o ponteiro local

// *x = NULL (quando x é ponteiro para ponteiro) → altera ponteiro original