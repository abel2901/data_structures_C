#include <stdio.h>
#include <conio.h>

struct lista
{
    int info;
    struct lista* prox;
};

typedef struct lista Lista;

Lista* cria_lista(void)
{
    return NULL;
}

Lista* insere_elemento(Lista* lst, int val)
{
    Lista* novo = (Lista*) malloc(sizeof(Lista));
    novo->info = val;
    novo->prox = lst;
    return novo;
}

void lcirc_imprime (Lista* lista)
{
    Lista* p = lista; /* faz apontar para o no inicial */

    if(p!=NULL)
    {
        do
        {
            printf("%d\n", p->info);
            p= p->prox;
        }
        while (p != lista);
    }
}

int main()
{
    Lista* lista;
    lista = cria_lista();
    lcirc_imprime(lista);
}
