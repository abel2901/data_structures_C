typedef struct
{
    int numero;
    double saldo;
}ContaBancaria;

void inicializa(ContaBancaria *conta, int, double);

void deposito(ContaBancaria *conta, double);

void saque(ContaBancaria *conta, double);

void imprime(ContaBancaria);
