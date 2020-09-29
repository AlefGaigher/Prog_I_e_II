#include <stdio.h>
#include <stdlib.h>
#define MESES 12
#define CORRENTISTA 100
#define TAM 50
typedef char VETORSTRING[TAM];
typedef int INTEIRO;
typedef struct ficha
{
    VETORSTRING nome;
    INTEIRO tipo;
    float extrato[MESES];
}FICHA;

int main()
{
    FICHA banco[CORRENTISTA];
    INTEIRO i, j;
    //struct ficha Auxiliar;
    //FICHA Ficha1;
    printf("Dados dos correntistas: \n");
    for(i=0;i<CORRENTISTA; i++)
    {
        printf("Dados do Correntista %i: \n", i+1);
        printf("Nome: ");
        scanf("\n%[^\n]", banco[i].nome);
        printf("Tipo (1: Nacional) ou (2: Internacional): ");
        scanf("%i", &banco[i].tipo);
        printf("Movimentação Anual:\n");
        for(j=0;j<MESES; j++)
        {
            printf("Mes %i: R$ ", j+1);
            scanf("%f", &banco[i].extrato[j]);
        }
    }
    //Auxiliar = banco[99];
    //Ficha1 = banco[0];
    return 0;
}
