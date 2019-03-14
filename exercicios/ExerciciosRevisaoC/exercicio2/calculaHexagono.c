/* Crie um programa para calcular a área e o perímetro de um hexágono.
O seu programa deve implementar uma função chamada calcula_hexagono que calcule a área
e o perímetro de um hexágono regular de lado L.

void calcula_hexagono(float l, float *area, float *perimetro);

Lembrando que a área e o perímetro de um hexágono regular são dados por:
Para os cálculos, obrigatoriamente você deve utilizar as funções sqrt e pow da biblioteca math.h.
Em seguida crie a função principal do programa e utilize a função calcula_hexagono para calcular
 a área e o perímetro de um hexágono de lado l informado pelo usuário.
 */

#include<conio.h>
#include<stdio.h>
#include<math.h>

void calcula_hexagono(float l, float *area, float *perimetro)
{
    *area = (3* pow(l,3)*sqrt(3))/2;
    *perimetro = 6*l;
    printf("\n O valor da area: %.2f", *area);
    printf("\n O valor do perimetro: %.2f", *perimetro);
}

int main()
{
    float l;
    float area;
    float perimetro;

    printf("Digite o lado: ");
    scanf("%f", &l);
    calcula_hexagono(l, &area, &perimetro);
    return 0;
}
