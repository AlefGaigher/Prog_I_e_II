/*
Como Usar:
RAND SEM REPETIÇÂO
SRAND
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAMANHO 15
#define MAXIMO 9
#define MINIMO 0

int main()
{
    int Vetor[TAMANHO], i=0, j,flag;
    srand(time(NULL));
    printf("Vetor[%i] com valores aleatorios no intervalo: [%i, %i]:\n", TAMANHO, MINIMO, MAXIMO);
    printf("[");
    while(i<TAMANHO)
    {
       flag = 0;// Não tem numero repetido
       j=i-1;
       while(j>=0 && flag == 0)
       {
           if(Vetor[i] == Vetor[j]);
           j++;
       }

    }

    printf(" ]\n\n");


    return 0;
}
