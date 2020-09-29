/*
Intervalo [-10,10]
Sorte[Indice]= rand()% (10-(-10)+1)-10;
             = rand()% (10+10+1)-10;
             = rand()% 21-10;
                [0,20]
                -10
                [-10,10]
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAMANHO 10

int main()
{
    int Sorte[TAMANHO], Indice;
    int Menor = 10, Maior = -10, flag = 0;
    srand(time(NULL));
    printf("Os Numeros Sorteados entre [-10,20] sao: [");
    for (Indice = 0 ; Indice < TAMANHO; Indice++)
    {
        Sorte[Indice] = rand() % 21-10;
        if(Sorte[Indice]< Menor)
            Menor = Sorte[Indice];
        if(Sorte[Indice] > Maior)
            Maior = Sorte[Indice];
        if(Sorte[Indice] == 0)
            flag = 1;
        printf(" %i", Sorte[Indice]);
    }
    printf(" ]\n\n");
    printf("Menor Termo do Vetor: %i\n", Menor);
    printf("Maior Termo do Vetor: %i\n", Maior);
    if (flag == 1)
        printf("Numero e = 0");
    else
        printf("o numero 0 nao aparece \n");
    return 0;
}
