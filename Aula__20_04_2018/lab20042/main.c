#include <stdio.h>
#include <stdlib.h>
#define ALUNOS 5 // CAPACIDADE MÁXIMA DE ARMAZENAMENTO
int main()

{
    float Pauta[ALUNOS], Soma=0, Media;
    int Indice= 0;
    while(Indice < ALUNOS)
    {
        printf("Nota do Aluno %i entre [0,10]= " , Indice +1);
        scanf("%f", &Pauta[Indice]);
        if (Pauta[Indice]<0 || Pauta[Indice]>10)
            printf("Erro na nota. Escolha de Novo. \n ");
        else
           {
            Soma = Soma + Pauta[Indice];
            Indice++;
           }
    }
    Media = Soma/ALUNOS;
    printf("Media da turma: %.1f\n", Media);
        if (Media <= 5)
            printf("Turma e Tijolinho!! \n");
        else
            printf("Turma #ERO¨&¨ BOTAO!!\n");
    return 0;
}

