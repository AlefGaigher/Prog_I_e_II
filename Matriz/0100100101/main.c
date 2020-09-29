#include <stdio.h>
#include <stdlib.h>
#define LINHAS 5
#define COLUNAS 6

int main()
{
    int Matriz[LINHAS][COLUNAS], i, j, Contador = 1;
    printf("Matriz[%i][%i]: \n", LINHAS, COLUNAS);
    for(i=0; i<LINHAS; i++)
    {
        for(j=0; j<COLUNAS;j++){
        Matriz[i][j]=Contador;
        printf("\t%i", Matriz[i][j]);
        Contador++;
        }
        printf("\n");//Pulas Linha
    }

    return 0;
}
