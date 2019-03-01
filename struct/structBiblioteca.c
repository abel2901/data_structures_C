/*Crie uma estrutura para armazenar livros de uma biblioteca.
A estrutura deve armazenar o t�tulo do livro, o autor, o n�mero do registro
e o pre�o. O pre�o deve ser implementado por meio de
uma uni�o an�nima com um membro para reais */

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

