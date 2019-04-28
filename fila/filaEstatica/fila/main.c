#include <stdio.h>
#include <stdlib.h>
#define N 100

struct fila
{
    int n;  /* numeros de elementos na fila */
    int ini;  /* posicao do proximo elemento a ser retirado da fila */
    float vet[N];
};

typedef struct fila Fila;

Fila* fila_cria(void)
{
    Fila* fila = (Fila*) malloc(sizeof(Fila));
    fila->n = 0;
    fila-> ini = 0;
    return fila;
}

void fila_insere(Fila* fila, float v)
{
    int fim;
    if(fila->n == N)
    {
        printf("Capacidade da fila estourou");
        exit(1);
    }

    fim = (fila->ini + fila->n) % N;
    fila -> vet[fim] = v;
    fila -> n++;
}

int fila_vazia(Fila* fila)
{
    if(fila->n == NULL)
    {
        return 1;
    }
    printf("Fila nao vazia");
    return 0;
}

float fila_retira(Fila* fila)
{
    float v;
    if(fila_vazia(fila))
    {
        printf("Fila vazia");
        exit(1);
    }

    v = fila->vet[fila->ini];
    fila->ini = (fila->ini+1)%N;
    fila->n--;
    return v;
}

int main()
{
    Fila* fila;
    fila = fila_cria();
    fila_insere(fila, 10);
    fila_retira(fila);
    fila_vazia(fila);

    printf("Hello world!\n");
    return 0;
}
