#include<conio.h>
#include<stdio.h>
/*Crie um programa contendo o seguinte trecho de código:
int a = 25; int *pa = &a; int b = *pa + a;
 printf("%d %d %d %d %d %d\n", a, pa, &a, *pa, b, &b);

a) Qual o resultado da execução do programa?
a = 25, pa = 6356744, &a = 6356744, *pa = 25, b = 50, &b = 6356740

b) Qual o significado de cada um dos valores escritos na tela?
as variáveis a, pa e b armazenam um valor do tipo inteiro.
*pa é um ponteiro que se refere a um outro valor alocado em outra área de memória,
 através de seu endereço.
 &b é um endereço.
*/

int main()
{
    int a = 25;
    int *pa = &a;
    int b = *pa + a;
    printf("a = %d\npa = %d\n&a = %d\n*pa = %d\nb = %d\n&b = %d\n", a, pa, &a, *pa, b, &b);
}
