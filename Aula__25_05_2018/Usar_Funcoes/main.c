#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAMANHO 15
#define MAXIMO 99
#define MINIMO 0

int main()
{
    int Vetor[TAMANHO], Indice;
    srand(time(NULL));
    printf("Vetor[%i] com valores aleatorios no intervalo: [%i, %i]:\n", TAMANHO, MINIMO, MAXIMO);
    printf("[");
    for (Indice = 0; Indice<TAMANHO; Indice++)
    {
        Vetor[Indice] = rand()%(MAXIMO-MINIMO+1)+MINIMO;
        printf(" %i", Vetor[Indice]);

    }

    printf(" ]\n\n");


    return 0;
}
