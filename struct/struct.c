#include <conio.h>
#include <stdio.h>

/*Using struct we can define a new data type */

struct Aluno
{
    int nId;
    float nota[3];
    float media;
};

int main()
{
    struct Aluno Jose;
    Jose.nId = 500;
    Jose.nota[0] = 8.1;
    Jose.nota[1] = 8.0;
    Jose.nota[2] = 8.4;

    Jose.media = (Jose.nota[0] + Jose.nota[1] + Jose.nota[2])/3.0;

    printf("Id: %d \n", Jose.nId);
    printf("Notas: %.2f", Jose.media);

}
