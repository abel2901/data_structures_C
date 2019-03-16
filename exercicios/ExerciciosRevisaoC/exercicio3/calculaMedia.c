#include<conio.h>
#include<stdio.h>
#include<math.h>

char situacao(float p1, float p2, float p3, int faltas, int aulas, float *media)
{
    *media = (p1 + p2 + p3)/3;
    char aprovado = 'A';
    char reprovadoFalta = 'F';
    char reprovado = 'R';

    if(*media >= 6 && faltas*0.25 <= aulas)
    {
        printf("A nota: %.1f, %c - aprovado", *media, aprovado);
        return aprovado;
    }

    else if(*media < 6 && faltas*0.25 <= aulas)
    {
        printf("A nota: %.1f%, %c - reprovado", *media, reprovado);
        return reprovado;
    }
    else if (faltas*0.25 >= aulas)
    {
        printf("Nota: %.1f%, %c - reprovado por falta", *media, reprovadoFalta);
        return reprovadoFalta;
    }
}

int main()
{
    int faltas;
    int aulas;
    float media;
    float p1;
    float p2;
    float p3;

    printf("Digite o numero de faltas: ");
    scanf(" %d", &faltas);
    printf("Digite a quantidade de aulas: ");
    scanf(" %d", &aulas);
    printf("Digite a nota p1: ");
    scanf("%f", &p1);
    printf("Digite a nota p2: ");
    scanf("%f", &p2);
    printf("Digite a nota p3: ");
    scanf("%f", &p3);

    situacao(p1, p2, p3, faltas, aulas, &media);

    return 0;
}
