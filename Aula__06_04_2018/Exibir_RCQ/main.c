#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade;
    float medcin, medqua,rcq;
    printf("Medida da Cintura (em Centimetros) = ");
    scanf("%f", &medcin);
    printf("Medida do Quadril (em Centimetros) = ");
    scanf("%f", &medqua);
    if (medcin <= 0 || medqua <= 0)
        printf("Erro!\n");
    else
    {
    printf("Sua Idade (em Anos) = ");
    scanf("%i", &idade);
    if(idade <10)
        printf("Erro!\n");
    else
    {
        if (idade <= 18)
        {
            rcq = (1.15 * medcin)/(medqua);
            printf("Seu rqc = %.2f\n", rcq);
        }
        else if (idade <= 30)
        {
            rcq = (1.05 * medcin)/(medqua);
            printf("Seu rqc = %.2f\n", rcq);
        }
        else
        {
            rcq = (0.95 * medcin)/(medqua);
            printf("Seu rqc = %.2f\n", rcq);
        }
    }
}
    return 0;
}
