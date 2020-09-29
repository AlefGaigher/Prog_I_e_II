/* Fun��o de  tempo: srand
Alterar o tempo interno utilizado pela fun��o aleat�ria: rand aumentando o n�vel de
aleatoriedade do numero sorteado
 *Como usar a fun��o?
- Include <Time H> => Pertence a est� biblioteca
- � chamada ap�s a declara��o de todas as vari�veis (apenas uma vez)

*/

#include <stdio.h>
#include <stdlib.h>
#define TAMANHO 10

int main()
{
    int Vetor[TAMANHO], Indice;
    srand(time (NULL)); // Aumenta o Grau de Aleatoriedade
    printf("Vetor com %i Termos Aleatorios: \n", TAMANHO);
    printf("Vetor: [ ");
    for(Indice = 0; Indice < TAMANHO; Indice++)
    {
        Vetor[Indice] = rand();
        printf("%i,", Vetor[Indice]);
    }
    printf(" ].\n");
    return 0;
}
