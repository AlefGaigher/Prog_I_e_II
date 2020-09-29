#include <stdio.h>
#include <stdlib.h>
#define Alunos 30
#define Colunas 2
int main()
{
    float Pauta[Alunos][Colunas],S1=0,S2=0,M1,M2,MG,i,j;
    for(j=0;j<Colunas;j++)
    {
        printf("Dados do Bimestre %i:\n",j+1);
        i=0;
        while(i<Alunos)
        {
            if(j==0)
            {
                printf("Nota do Bimestre 1:");
                scanf("%f",&Pauta[i][j]);
                if(Pauta[i][j]<0 || Pauta[i][j]>10)
                printf("ERRO. Escolha Novamente.\n");
                else
                {
                    S1=S1+Pauta[i][j];
                    i++;
                }
            }
            else
            {
                printf("Nota do Bimestre 2:");
                scanf("%f",&Pauta[i][j]);
                if(Pauta[i][j]<0 || Pauta[i][j]>10)
                printf("ERRO. Escolha Novamente.\n");
                else
                {
                    S2=S2+Pauta[i][j];
                    i++;
                }
            }

        }
    }
    M1=S1/Alunos;
    M2=S2/Alunos;
    MG=(M1+M2)/2;
    return 0;
}
