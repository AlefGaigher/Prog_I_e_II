/* => Função: Randômica
Controlar o Intervalo de Sorteio ?
Função: MOD => %
Intervalo: [Mínimo, Máximo]
Use a Seguinte Fórmula
Numero Sorteado = rand ()% (Maximo - Minimo +1) + Mínimo.

Ex: [Minimo= 1 , Maximo = 60]
Numero Sorteado = rand()%%(60-1+1)+1,
Numero Sorteado = rand()%60+1,  Intervalo [1,60]
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
        Vetor[Indice] = rand()%60 +1; // Intervalo [1, 60]
        printf("%i, ", Vetor[Indice]);
    }
    printf(" ].\n");
    return 0;
}
