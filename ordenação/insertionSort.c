int main()
{
    int vetor [4] = {10, 5, 8, 6};
    int tamanho = 4;
    insertion_sort(vetor, tamanho);

    for(tamanho = 0; tamanho <= 3; tamanho++){
        printf("%d ", vetor[tamanho]);
    }

}

void insertion_sort(int vetor[], int tamanhoVetor)
{

    int escolhido, j, i;

    for (int i = 1; i < tamanhoVetor; i++)
    {
        escolhido = vetor[i];
        j = i - 1;

        while ((j >= 0) && (vetor[j] > escolhido))
        {
            vetor[j + 1] = vetor[j];
            j--;
        }

        vetor[j + 1] = escolhido;
    }
}
