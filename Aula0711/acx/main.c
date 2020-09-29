#include <stdio.h>
#include <stdlib.h>
#define TAMANHOSTRING 50
#define MESES 12
#define CORRENTISTAS 100
typedef char VETOR [TAMANHOSTRING];
typedef int INTEIRO;
typedef struct ficha
{
    VETOR nome;
    INTEIRO tipo;
    float extrato[MESES];
}FICHA;
int main()
{
    FICHA Registro1;
    FICHA banco[CORRENTISTAS];
    struct ficha Aux;
    INTEIRO i, j;
    printf("Dados dos correntistas: \n");
    for(i = 0; i < CORRENTISTAS; i++)
        {
        printf("Dados do Correntista %i:\n", i + 1);
        printf("Nome: ");
        scanf("\n%[^\n]:", banco[i].nome);
        printf("Tipo da Conta(1: Nacional ou 2: Internacional):\n");
        scanf("%i", &banco[i].tipo);
        printf("Movimentacao anual de 2017: \n");
        for(j = 0; j < MESES; j++)
            {
                printf("Mes %i: R$ ", j + 1);
                scanf("%f", &banco[i].extrato[j]);
            }
    }
    return 0;
}
