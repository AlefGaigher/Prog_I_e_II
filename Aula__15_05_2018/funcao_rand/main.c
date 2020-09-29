/* A Função: Randômica
 Como Sortear um numero Qualquer?
 Função: rand
* A Função faz o sorteio de apenas um valor Inteiro Possitivo (de cada vez) proporcional a
- Memoria , Hora Atual

*/

#include <stdio.h>
#include <stdlib.h>
#define TAMANHO 10

int main()
{
    int Vetor[TAMANHO], Indice;
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
