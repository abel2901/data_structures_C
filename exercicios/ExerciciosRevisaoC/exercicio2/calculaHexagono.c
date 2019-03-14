/* Crie um programa para calcular a �rea e o per�metro de um hex�gono.
O seu programa deve implementar uma fun��o chamada calcula_hexagono que calcule a �rea
e o per�metro de um hex�gono regular de lado L.

void calcula_hexagono(float l, float *area, float *perimetro);

Lembrando que a �rea e o per�metro de um hex�gono regular s�o dados por:
Para os c�lculos, obrigatoriamente voc� deve utilizar as fun��es sqrt e pow da biblioteca math.h.
Em seguida crie a fun��o principal do programa e utilize a fun��o calcula_hexagono para calcular
 a �rea e o per�metro de um hex�gono de lado l informado pelo usu�rio.
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
