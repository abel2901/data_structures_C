/*Crie uma estrutura para armazenar livros de uma biblioteca.
A estrutura deve armazenar o título do livro, o autor, o número do registro
e o preço. O preço deve ser implementado por meio de
uma união anônima com um membro para reais */

struct Livros
{
    char titulo[81];
    char autor[65];
    int registro;
    union
    {
        float precoReais;
    };
};

