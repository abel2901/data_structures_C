typedef struct
{
    int numero;
    double saldo;
}ContaBancaria;

void inicializa(ContaBancaria *conta, int, double);

void deposito(ContaBancaria, double);

void saque(ContaBancaria, double);

void imprime(ContaBancaria);