#include <stdio.h>
#include <stdlib.h>
#define ALUNOS 5 // CAPACIDADE MÁXIMA DE ARMAZENAMENTO
int main()

{
    float Pauta[ALUNOS];
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
    printf("Relacao dos alunos abaixo da Nota: 7.0 sao: \n");
    for(Indice=0; Indice < ALUNOS; Indice = Indice +1)
    {
        if (Pauta[Indice] <7.0)
            printf("Aluno %i - Nota = %.1f\n", Indice+1, Pauta[Indice]);
    }

    return 0;
}
