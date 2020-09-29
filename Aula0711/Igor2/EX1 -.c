#include <stdio.h>
#include <stdlib.h>
#define Linhas 4
#define Colunas 5

int main()
{
    int Matriz[Linhas][Colunas],i,j;
    for(i=0;i<Linhas;i++)
    {
        for(j=0;j<Colunas;j++)
        {
            Matriz[i][j]=(i*i)+(j*j);
            printf("\t%i",Matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}
