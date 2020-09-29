/* =>Como Criar um (1) Numero Aleatorio?
As Funções são:
-> Rand: Criar Apenas um número aleatorio inteiro e natural (numero >= 0)
-> srand aumenta o grau de aleatoriedade da função como alterar o tempo (#include <time.h>).

como usar a função srand: apenas uma vez no programa principal (main)

=> Como escolher o intervalo de Sorteio
    exemplo: valores no intervalo entre
    Interno [ Min, Max]
    use a formula abaixo
    numero sorte = rand()% (máximo - minimo) + minimo

    exerc:
    Criar 10 numeros aleatórios no intervalo entre [20, 50] e exibir para o usuario o Menor e o Maior Sorteado pra função RAND.
    Sorte[Indice]= rand() % (Máximo - Minimo+1)+Minimo;
    Sorte[Indice]= rand() % (50-20+1)+20
    Sorte[Indice]= rand() % 31+20;
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAMANHO 10

int main()
{
    int Sorte[TAMANHO], Indice;
    int Menor = 51, Maior = 19;
    srand(time(NULL));
    printf("Os Numeros Sorteados entre [20,50] sao: [");
    for (Indice = 0 ; Indice < TAMANHO; Indice++)
    {
        Sorte[Indice] = rand() % 31+20;
        if(Sorte[Indice]< Menor)
            Menor = Sorte[Indice];
        if(Sorte[Indice] > Maior)
            Maior = Sorte[Indice];
        printf(" %i", Sorte[Indice]);
    }
    printf(" ]\n\n");
    printf("Menor Termo do Vetor: %i\n", Menor);
    printf("Maior Termo do Vetor: %i\n", Maior);
    return 0;
}
