/*
 *  Bitonic sort
 */

#include <stdio.h>
#include <stdlib.h>
#define MAX 8
#define SWAP(x,y) t = x; x = y; y = t;

int dado[MAX];
int up = 1;
int down = 0;

int main()
{
    int i;

    printf("\nDigite os valores: ");
    for (i = 0; i < MAX ; i++)
    {
        scanf("%d", &dado[i]);
    }
    sort();
    for (i = 0; i < MAX; i++)
    {
        printf("%d ", dado[i]);
    }
}
/*
 * compara e faz o swap
 */
void compare(int i, int j, int dir)
{
    int t;

    if (dir == (dado[i] > dado[j]))
    {
        SWAP(dado[i], dado[j]);
    }
}
/*

 *
 * Classifica uma sequ�ncia bit�nica em ordem crescente se dir = 1
 * caso contr�rio, em ordem decrescente
 */
void bitonicmerge(int low, int c, int dir)
{
    int k, i;

    if (c > 1)
    {
        k = c / 2;
        for (i = low; i < low+k ; i++)
            compare(i, i+k, dir);
        bitonicmerge(low, k, dir);
        bitonicmerge(low+k, k, dir);
    }
}
/*
 * Gera sequ�ncia bit�nica, classificando recursivamente
�* duas metades do array em ordens de classifica��o opostas
�*bitonicmerge ir� mesclar o dado resultante
 */
void recbitonic(int low, int c, int dir)
{
    int k;

    if (c > 1)
    {
        k = c / 2;
        recbitonic(low, k, up);
        recbitonic(low + k, k, down);
        bitonicmerge(low, c, dir);
    }
}

/*
 * Ordena o array
 */
void sort()
{
    recbitonic(0, MAX, up);
}
