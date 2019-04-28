#include <stdio.h>
#include <stdlib.h>
#include "pilha_header.h"

struct p
{
    int n;
    float vet[N];
};

Pilha* pilha_cria(void)
{
    Pilha* p = (Pilha*) malloc(sizeof(Pilha));
    p->n = 0;
    return p;
}

void pilha_push(Pilha* p, float v)
{
    if(p->n == N)
    {
        printf("Capacidade da pilha estorou \n");
        exit(1);
    }

    printf("capacidade da pilha nao estorou");
    p->vet[p->n] = v;
    p->n++;
}

int pilha_vazia(Pilha* p)
{
    if(p == NULL)
    {
        printf("pilha vazia");
        return -1;
    } else if (p->n == N){
        printf("pilha cheia");
        return p->n;
    }
}

int main()
{
    Pilha* pi;
    pi = pilha_cria();
    pilha_push(pi, 60);
    return 0;
}
