#include <stdio.h>
#include <stdlib.h>

int main()
{
    int LI, LS, M, Contador;
    printf("Digite Seu Limite Inferior: ");
    scanf("%i", &LI);
    printf("Digite Seu Limite Superior: ");
    scanf("%i", &LS);
    printf("Digite seu Multiplo: ");
    scanf("%i", &M);
    if (M <= 1 || LI < 0 || LS < 0 || LS<LI)
        printf("Error! \n");
    else
    {
        printf("Os Multiplos de %i entre [%i, %i] sao: \n", M,LI,LS);
        for(Contador =LI; Contador<=LS; Contador++ )
        {
            if(Contador%M==0)
                printf("Multiplo de %i = %i\n", M, Contador);
        }

    }
    return 0;
}
