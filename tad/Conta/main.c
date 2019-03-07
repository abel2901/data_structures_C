/* Implemente um TAD ContaBancaria, com os campos n�mero e saldo onde os clientes
podem fazer as seguintes opera��es:
- Iniciar uma conta com um n�mero e saldo inicial
- Depositar um valor
- Sacar um valor
- Imprimir o saldo */

#include<stdlib.h>
#include <stdio.h>
#include "ContaBancaria.h"

int main()
{
    ContaBancaria conta1;
    inicializa(&conta1,180, 1000.2);
    imprime(conta1);
    return 0;
}
