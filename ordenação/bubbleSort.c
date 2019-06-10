#include <conio.h>
#include <stdio.h>

void bubbleSort(int vetor[], int tamanho)
{
    int i, j, continua, aux;
    for(j = tamanho - 1; j>= 1; j--)
    {
        for(i = 0; i < tamanho - 1; i++)
        {
            if(vetor[i] > vetor[i+1])
            {
                aux = vetor[i];
                vetor[i] = vetor[i + 1];
                vetor[i+1] = aux;
            }
        }
    }
}

int main()
{
    int vetor [5] = {10, 5, 8, 4, 6};
    int tamanho = 5;
    bubbleSort(vetor, tamanho);

    for(tamanho = 0; tamanho <= 4; tamanho++)
    {
        printf("%d ", vetor[tamanho]);
    }
}
