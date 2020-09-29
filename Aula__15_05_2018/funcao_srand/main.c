/* Função de  tempo: srand
Alterar o tempo interno utilizado pela função aleatória: rand aumentando o nível de
aleatoriedade do numero sorteado
 *Como usar a função?
- Include <Time H> => Pertence a está biblioteca
- É chamada após a declaração de todas as variáveis (apenas uma vez)

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
