int main()
{
    int vetor [4] = {10, 5, 8, 6};
    int tamanho = 4;
    selection_sort(vetor, tamanho);

    for(tamanho = 0; tamanho <= 3; tamanho++)
    {
        printf("%d ", vetor[tamanho]);
    }

}

void selection_sort(int num[], int tam)
{
    int i, j, min, aux;
    for (i = 0; i < (tam-1); i++)
    {
        min = i;
        for (j = (i+1); j < tam; j++)
        {
            if(num[j] < num[min])
                min = j;
        }
        if (num[i] != num[min])
        {
            aux = num[i];
            num[i] = num[min];
            num[min] = aux;
        }
    }
}
