#include <stdio.h>
#include <stdlib.h>

int main()
{
    int acessos, total=50;
    char equipe;

    printf("Entre com o Numero de acessos: ");
    scanf("%i", &acessos);
    if(acessos < 0)
        printf("Erro no numero de acessos! ");
    else
    {
        if(acessos <= 500)
            total= total + 300;
        else
            total= total + 1000;
        printf("Escolha a Equipe: R-Vermelho ou B-Azul ou Y-Amarelo :");
        scanf("\n%c", &equipe);
        if(equipe == 'R' || equipe == 'r')
            total = total + 80;
        else if (equipe == 'B' || equipe == 'b')
            total = total +30;
        else if (equipe == 'Y' || equipe == 'y')
           total = total + 60;
        else
            printf("Equipe Incorreta! \n");
    }
    printf("Total de Pontos: %i\n", total);

    return 0;
}
