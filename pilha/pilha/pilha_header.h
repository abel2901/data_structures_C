#define N 50

struct pilha{
    int n;
    float vet[N];
};

typedef struct pilha Pilha;
Pilha* pilha_cria(void);

void libera_pilha(Pilha* p);

int tamanho_pilha(Pilha* p);

int pilha_cheia(Pilha* p);

void pilha_push(Pilha* p, float v);

float pilha_pop(Pilha* p);

int pilha_vazia(Pilha* p);

void pilha_libera (Pilha* p);
