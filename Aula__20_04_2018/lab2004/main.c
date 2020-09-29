#include <stdio.h>
#include <stdlib.h>
#define ALUNOS 5 // CAPACIDADE MÁXIMA DE ARMAZENAMENTO
int main()

{
    float Pauta[ALUNOS], Media;
    int Indice= 0;
    while(Indice < ALUNOS)
    {
        printf("Nota do Aluno %i entre [0,10]= " , Indice +1);
        scanf("%f", &Pauta[Indice]);
        if (Pauta[Indice]<0 || Pauta[Indice]>10)
            printf("Erro na nota. Escolha de Novo. \n ");
        else
            Indice++;
    }

    return 0;
}

