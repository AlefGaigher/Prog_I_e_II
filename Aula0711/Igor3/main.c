#include <stdio.h>
#include <stdlib.h>
#define Tam 4

int main()
{
    int Matriz[Tam][Tam],i,j;
    printf("MAtriz: M[%i][%i]:\n",Tam,Tam);
    for(i=0;i<Tam;i++)
    {
        for(j=0;j<Tam;j++)
        {
            Matriz[i][j]=rand()%90+10;
            printf("\t%i",Matriz[i][j]);
        }
        printf("\n");
}
    return 0;
}
