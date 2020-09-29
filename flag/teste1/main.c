#include <stdio.h>
#include <stdlib.h>
#define TAM 6
int main()
{
 int i,flag,vetor[TAM];
 char resp;

    printf("[1] Prog II \n[2] Log. Comp. \n[3] Calc. I\n[4] Circ. Logicos\n[5] Mod. Dados\n\n");

    for(i=1;i<TAM;i++)
        {
        printf("Digite sua Nota na Materia [%i]:" ,i);
        scanf("%i", &vetor[i]);

        if (vetor[i] <7){
            printf("Reprovado!! \n\n");
            flag=1;
            }
        else{
            printf("Aprovado! \n\n");
            flag=0;
        }
        }
    for(i=1;i<TAM;i++){
        if(7>vetor[i])
        {
            printf("Deseja Fazer Prova Final [%i] [S/N]? ",vetor[i]);
            scanf("\n%c", &resp);
        }
        else
            printf("Voce Passou Nessa Materia [%i]... Parabens!!\n",vetor[i]);
    }


    return 0;

 }
