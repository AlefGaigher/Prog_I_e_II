#include <stdio.h>
#include <stdlib.h>
#define Tam 4
int main()
{
    int TriangSup[Tam][Tam],i,j;
    printf("Matriz Quadrada: Triangular Superior[%i][%i]\n",Tam,Tam);
    for(i=0;i<Tam;i++)
    {
        for(j=0;j<Tam;j++)
        {
            if(i<=j)
                TriangSup[i][j]=rand()%90+10;
            else
                TriangSup[i][j]=0;
            printf("\t%i",TriangSup[i][j]);
        }
        printf("\n");
    }
    return 0;
}
