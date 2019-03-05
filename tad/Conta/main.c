/* Implemente um TAD ContaBancaria, com os campos número e saldo onde os clientes
podem fazer as seguintes operações:
- Iniciar uma conta com um número e saldo inicial
- Depositar um valor
- Sacar um valor
- Imprimir o saldo */

#include<stdlib.h>
#include <stdio.h>
#include "ContaBancaria.h"

int main()
{
    ContaBancaria conta1;
    inicializa(conta1,180, 1000.2);
    imprime(conta1);
    return 0;
}
