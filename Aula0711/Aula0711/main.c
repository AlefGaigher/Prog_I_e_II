#include <stdio.h>
#include <stdlib.h>
#define TS 50
#define CORRENTISTAS 100
#define MESES 12
typedef int INTEIRO;
typedef char VETORSTRING[TS];
typedef struct ficha
{
    VETORSTRING nome;
    INTEIRO tipo;
    float extrato[MESES];
}FICHA;
int main()
{
    FICHA banco[CORRENTISTAS];
    INTEIRO i,j;
    printf("Dados dos %i Correntistas do Banco:\n", CORRENTISTAS);
    for(i=0;i<CORRENTISTAS;i++)
    {
        printf("Correntista %i:\n", i+1);
        printf("Nome: ");
        scanf("\n%[^\n]", banco[i].nome);
        printf("Tipo (1:Nacional ou 2:Internacional): ");
        scanf("%i",&banco[i].tipo);
        printf("Entre com as %i Movimentacoes de 2017:\n ", MESES);
        for(j=0;j<MESES;j++)
        {
            printf("MES %i: R$ ", j+1);
            scanf("%f", &banco[i].extrato[j]);
        }
    }
    return 0;
}
