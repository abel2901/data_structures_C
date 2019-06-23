#include <stdio.h>
#include <conio.h>

struct lista2
{
    int info;
    struct lista2* ant;
    struct lista2* prox;
};
typedef struct lista2 Lista2;

Lista2* lst_cria(void)
{
    return NULL;
}

Lista2* lst_insere(Lista2* lst, int val)
{
    Lista2* novo = (Lista2*) malloc(sizeof(Lista2));
    novo->info = val;
    novo->prox = lst;
    novo->ant = NULL;

    /* Verifica se lista não estava vazia */
    if(lst!=NULL)
        lst-> ant = novo;
    return novo;
}

Lista2* lst_busca(Lista2* lst, int val)
{
    Lista2* p;
    for(p=lst; p!=NULL; p=p->prox)
    {
        if(p->info == val)
        {
            return p;
        }
        return NULL; /* não achou o elemento */
    }
}

Lista2* lst2_retira(Lista2* lst, int val)
{
    Lista2* p = lst_busca(lst, val);

    if(p == NULL)
    {
        return lst;
    }

    if(lst == p)
    {
        lst = p->prox;
    }
    else
    {
        p->ant->prox = p->prox;
    }

    if(p->prox != NULL)
    {
        p->prox->ant = p->ant;
    }

    free(p);

    return lst;
}

int main()
{
    Lista2* lst;
    lst = lst_cria();
    lst_insere(lst, 10);
}
