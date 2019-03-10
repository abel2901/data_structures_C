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
    inicializa(&conta1,180, 10);
    deposito(&conta1, 100);
    saque(&conta1, 2.0);
    imprime(conta1);
    return 0;
}
